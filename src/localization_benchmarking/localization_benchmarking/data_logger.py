import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from mocap4r2_msgs.msg import RigidBodies
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseWithCovarianceStamped, TransformStamped, Quaternion
from tf2_ros import StaticTransformBroadcaster, TransformListener, Buffer
import tf2_ros
import tf2_geometry_msgs
import csv
import os
import numpy as np
import math


def quaternion_from_euler(roll, pitch, yaw):
    """Convert Euler angles (roll, pitch, yaw) to a quaternion (x, y, z, w)."""
    cy = math.cos(yaw * 0.5)
    sy = math.sin(yaw * 0.5)
    cp = math.cos(pitch * 0.5)
    sp = math.sin(pitch * 0.5)
    cr = math.cos(roll * 0.5)
    sr = math.sin(roll * 0.5)

    q = Quaternion()
    q.w = cy * cp * cr + sy * sp * sr
    q.x = cy * cp * sr - sy * sp * cr
    q.y = sy * cp * sr + cy * sp * cr
    q.z = sy * cp * cr - cy * sp * sr
    return q 

def euler_from_quaternion(quaternion):
    """Convert a quaternion (x, y, z, w) to Euler angles (roll, pitch, yaw)."""
    x = quaternion.x
    y = quaternion.y
    z = quaternion.z
    w = quaternion.w

    sinr_cosp = 2 * (w * x + y * z)
    cosr_cosp = 1 - 2 * (x * x + y * y)
    roll = np.arctan2(sinr_cosp, cosr_cosp)

    sinp = 2 * (w * y - z * x)
    pitch = np.arcsin(sinp)

    siny_cosp = 2 * (w * z + x * y)
    cosy_cosp = 1 - 2 * (y * y + z * z)
    yaw = np.arctan2(siny_cosp, cosy_cosp)

    return roll, pitch, yaw

class DataLogger(Node):
    def __init__(self):
        super().__init__('data_logger_node')
        self.get_logger().info('data_logger_node startup')

        # Declare parameters
        self.declare_parameter('frequency', 1.0)
        self.frequency = self.get_parameter('frequency').value
        self.declare_parameter('rosbag', "test")
        self.rosbag = self.get_parameter('rosbag').value
        self.declare_parameter('algorithm', "mrpt")
        self.algorithm = self.get_parameter('algorithm').value
        self.declare_parameter('algorithm_topic', "/pf_pose")
        self.algorithm_topic = self.get_parameter('algorithm_topic').value
        self.declare_parameter('csv_path', "test")
        self.csv_path = self.get_parameter('csv_path').value

        # Declare parameters
        self.declare_parameter('dx', 0.0)
        self.dx = self.get_parameter('dx').value
        self.declare_parameter('dy', 0.0)
        self.dy = self.get_parameter('dy').value
        self.declare_parameter('dz', 0.0)
        self.dz = self.get_parameter('dz').value
        self.declare_parameter('dtheta', 0.0)
        self.dtheta = self.get_parameter('dtheta').value

        self.get_logger().info(f"dx: {self.dx}, dy: {self.dy}, dz: {self.dz}, dtheta: {self.dtheta}")

        # TF buffer and listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # Broadcaster for static transformation
        self.tf_broadcaster = StaticTransformBroadcaster(self)
        self.publish_static_transform()

        # Subscribers
        self.algorithm_sub = Subscriber(self, PoseWithCovarianceStamped, self.algorithm_topic)
        self.mocap_sub = Subscriber(self, RigidBodies, '/rigid_bodies')

        # Publisher
        self.publisher = self.create_publisher(Odometry, '/mocap_pose', 10)

        # Synchronizer
        self.sync = ApproximateTimeSynchronizer([self.algorithm_sub, self.mocap_sub], queue_size=10, slop=0.1)
        self.sync.registerCallback(self.callback)

        # defining paths to save results
        os.makedirs(self.csv_path, exist_ok=True)
        self.result_filename = os.path.join(self.csv_path, "results.csv")
        self.clear_csv_file()

        self.start_time = None

    def publish_static_transform(self):
        """Publishes a static transform between 'map' and 'map_temp'"""
        static_tf = TransformStamped()
        static_tf.header.stamp = self.get_clock().now().to_msg()
        static_tf.header.frame_id = "map"
        static_tf.child_frame_id = "map_temp"
        static_tf.transform.translation.x = self.dx
        static_tf.transform.translation.y = self.dy
        static_tf.transform.translation.z = self.dz

        q = quaternion_from_euler(0,0, self.dtheta)
        static_tf.transform.rotation = q  # Assign quaternion directly

        self.tf_broadcaster.sendTransform(static_tf)

    def get_transformation(self, source_frame, target_frame):
        """Fetches the latest transformation between the two frames"""
        try:
            return self.tf_buffer.lookup_transform(
                target_frame, source_frame, rclpy.time.Time(), rclpy.duration.Duration(seconds=0.1)
            )
        except (tf2_ros.LookupException, tf2_ros.ConnectivityException, tf2_ros.ExtrapolationException):
            self.get_logger().warn(f"Failed to get transform: {source_frame} -> {target_frame}")
            return None

    def callback(self, a_msg, m_msg):
        """Handles synchronized messages from the algorithm and mocap system"""
        if not m_msg.rigidbodies:
            self.get_logger().warn("No rigid bodies found in mocap message")
            return

        mocap_pose = m_msg.rigidbodies[0].pose
        transformation = self.get_transformation("map", "map_temp")

        if transformation:
            transformed_pose = tf2_geometry_msgs.do_transform_pose(mocap_pose, transformation)
        else:
            # self.get_logger().warn("Using untransformed mocap pose due to missing transform")
            # transformed_pose = mocap_pose
            return
        
        # Extract time stamp from message header
        time_stamp = m_msg.header.stamp.sec + m_msg.header.stamp.nanosec / 1e9

        # Initialize start_time if this is the first callback
        if self.start_time is None:
            self.start_time = time_stamp
        
        relative_time = time_stamp - self.start_time

        # Save data to CSV
        mocap_x = transformed_pose.position.x * 1000
        mocap_y = transformed_pose.position.y * 1000
        _,_,mocap_yaw = euler_from_quaternion(transformed_pose.orientation)
        
        ###### Warining here:############
        # TODO: Check this orientation below
        mocap_yaw += np.deg2rad(77) 

        algorithm_pos = a_msg.pose.pose
        _,_,algorithm_yaw = euler_from_quaternion(algorithm_pos.orientation)

        with open(self.result_filename, mode='a', newline='') as file:
            writer = csv.writer(file)
            writer.writerow([
                relative_time,
                mocap_x, mocap_y, mocap_yaw,
                algorithm_pos.position.x * 1000, algorithm_pos.position.y * 1000, algorithm_yaw
            ])
        
        # self.get_logger().info(f"Mocap pose original: {mocap_pose}")
        # self.get_logger().info(f"Mocap x: {mocap_x}, mocap y: {mocap_y}, mocap yaw: {mocap_yaw}")
        # self.get_logger().info(f"algorithm x: {algorithm_pos.position.x * 1000}, algorithm y: {algorithm_pos.position.y * 1000}, algorithm yaw: {algorithm_yaw}")


        # Convert transformed pose to odometry message
        odom = Odometry()
        odom.header = m_msg.header
        odom.header.frame_id = "map"
        odom.pose.pose = transformed_pose
        odom.pose.pose.orientation = quaternion_from_euler(0,0, mocap_yaw)
        self.publisher.publish(odom)

    def clear_csv_file(self):
        """Clear the contents of the CSV file initially."""
        if os.path.isfile(self.result_filename):
            with open(self.result_filename, mode='w', newline='') as file:
                writer = csv.writer(file)
                writer.writerow(["time_stamp[s], x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]", 
                                 "x_pose[mm]", "y_pose[mm]", "theta[rad]"])


def main(args=None):
    rclpy.init(args=args)
    logger_node = DataLogger()
    rclpy.spin(logger_node)
    logger_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()



    # def callback(self, a_msg, m_msg):
    #     algorithm_pos = a_msg.pose.pose
    #     algorithm_yaw = self.yaw_from_quaternion(algorithm_pos.orientation)
    #     mocap_pos = m_msg.rigidbodies[0].pose
    #     mocap_yaw = self.yaw_from_quaternion(mocap_pos.orientation) + np.deg2rad(77)

    #     file_exists = os.path.isfile(self.result_filename)  
    #     with open(self.result_filename, mode='a', newline='') as file:
    #         writer = csv.writer(file)
    #         if not file_exists:
    #             writer.writerow([
    #                 "x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]", 
    #                 "x_pose[mm]", "y_pose[mm]", "theta[rad]"
    #             ])
    #         writer.writerow([
    #             mocap_pos.position.x*1000, mocap_pos.position.y*1000, mocap_yaw,
    #             algorithm_pos.position.x*1000, algorithm_pos.position.y*1000, algorithm_yaw
    #         ])
    