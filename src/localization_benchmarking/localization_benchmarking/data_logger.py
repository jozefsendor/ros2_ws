import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from mocap4r2_msgs.msg import RigidBodies
from nav_msgs.msg import Odometry
from nav2_msgs.msg import ParticleCloud
from geometry_msgs.msg import PoseWithCovarianceStamped, TransformStamped, Quaternion, PoseArray
from tf2_ros import StaticTransformBroadcaster, TransformListener, Buffer
from rclpy.qos import QoSProfile, QoSReliabilityPolicy
import tf2_ros
import tf2_geometry_msgs
import csv
import os
import numpy as np
import math
import time

qos_profile = QoSProfile(
    reliability=QoSReliabilityPolicy.BEST_EFFORT,
    depth=10
)


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
        #time.sleep(2)
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

        # self.get_logger().info(f"dx: {self.dx}, dy: {self.dy}, dz: {self.dz}, dtheta: {self.dtheta}")
        self.get_logger().info(f"csv path {self.csv_path} rosbag{self.rosbag} algorithm topic{self.algorithm_topic}")

        # TF buffer and listener
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        # Broadcaster for static transformation
        self.tf_broadcaster = StaticTransformBroadcaster(self)
        self.publish_static_transform()

        # Subscribers
        self.create_subscription(PoseWithCovarianceStamped, self.algorithm_topic, self.algorithm_callback, 10)
        self.create_subscription(RigidBodies, '/rigid_bodies', self.mocap_callback, 10)
        if self.algorithm == "amcl":
            self.create_subscription(ParticleCloud, "/particle_cloud", self.particles_callback, qos_profile)
        elif self.algorithm == "mrpt":
            self.create_subscription(PoseArray, "/particlecloud", self.particles_callback, qos_profile)

        # Publisher
        self.publisher = self.create_publisher(Odometry, '/mocap_pose', 10)

        # Message caches
        self.last_algorithm_msg = None
        self.last_mocap_msg = None

        # Paths
        os.makedirs(self.csv_path, exist_ok=True)
        self.result_filename = os.path.join(self.csv_path, "results.csv")
        self.clear_csv_file()

        self.start_time = None
        self.last_particles_msg = None
        self.last_mocap_time = None

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
        static_tf.transform.rotation = q 

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
        
    def clear_csv_file(self):
        """Clear the contents of the CSV file initially."""
        if os.path.isfile(self.result_filename):
            with open(self.result_filename, mode='w', newline='') as file:
                writer = csv.writer(file)
                writer.writerow(["time_stamp[s]", "x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]", 
                                "x_pose[mm]", "y_pose[mm]", "theta[rad]", "num_particles", "valid_pose"])
    
    def particles_callback(self, msg):
        self.last_particles_msg = msg

    def algorithm_callback(self, msg):
        self.last_algorithm_msg = msg
        # self.try_log_data()

    def mocap_callback(self, msg):
        if not msg.rigidbodies:
            self.get_logger().warn("No rigid bodies found in mocap message")
            return
        self.last_mocap_msg = msg
        self.try_log_data()

    def try_log_data(self):
        if self.last_mocap_msg is None:
            return

        mocap_pose = self.last_mocap_msg.rigidbodies[0].pose
        transformation = self.get_transformation("map_temp", "map")

        if transformation:
            transformed_pose = tf2_geometry_msgs.do_transform_pose(mocap_pose, transformation)
        else:
            self.get_logger().warn("Using untransformed mocap pose due to missing transform")
            return

        time_stamp = self.last_mocap_msg.header.stamp.sec + self.last_mocap_msg.header.stamp.nanosec / 1e9
        if self.start_time is None:
            self.start_time = time_stamp
            self.get_logger().info("Data logger start")
        relative_time = time_stamp - self.start_time

        # Determine if it's time to log mocap data based on the frequency settings
        if self.last_algorithm_msg is not None or (self.last_mocap_time is None or (time_stamp - self.last_mocap_time) >= 0.2):  # 5Hz frequency for Mocap
            mocap_x = transformed_pose.position.x * 1000
            mocap_y = transformed_pose.position.y * 1000
            _, _, mocap_yaw = euler_from_quaternion(transformed_pose.orientation)

            # Default values when no algorithm data
            algorithm_x = algorithm_y = algorithm_yaw = num_particles = -1
            valid_pose = 0

            if self.last_algorithm_msg is not None:
                algorithm_pos = self.last_algorithm_msg.pose.pose
                algorithm_x = algorithm_pos.position.x * 1000
                algorithm_y = algorithm_pos.position.y * 1000
                _, _, algorithm_yaw = euler_from_quaternion(algorithm_pos.orientation)

                if self.last_particles_msg is not None:
                    if isinstance(self.last_particles_msg, PoseArray):
                        num_particles = len(self.last_particles_msg.poses)
                    elif isinstance(self.last_particles_msg, ParticleCloud):
                        num_particles = len(self.last_particles_msg.particles)

                valid_pose = 1 if self.last_mocap_time is not None else 0

            # Write the results to the CSV file
            with open(self.result_filename, mode='a', newline='') as file:
                writer = csv.writer(file)
                writer.writerow([
                    relative_time,
                    mocap_x, mocap_y, mocap_yaw,
                    algorithm_x, algorithm_y, algorithm_yaw,
                    num_particles, valid_pose
                ])
            
            #self.get_logger().info(f"Valid pose: {valid_pose}")
            # Update last mocap log time
            self.last_mocap_time = time_stamp

            # Publish mocap pose as odometry
            odom = Odometry()
            odom.header = self.last_mocap_msg.header
            odom.header.frame_id = "map"
            odom.pose.pose = transformed_pose
            odom.pose.pose.orientation = quaternion_from_euler(0, 0, mocap_yaw)  # Flatten Z rotation
            self.publisher.publish(odom)
            #self.get_logger().info(f"Published Mocap pose at {relative_time:.2f}s")

        # Clear messages to avoid reusing old ones
        self.last_algorithm_msg = None
        self.last_mocap_msg = None




def main(args=None):
    rclpy.init(args=args)
    logger_node = DataLogger()
    rclpy.spin(logger_node)
    logger_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()



    # def try_log_data(self):
    #     if self.last_mocap_msg is None:
    #         return  # Wait until both messages are available

    #     mocap_pose = self.last_mocap_msg.rigidbodies[0].pose
    #     transformation = self.get_transformation("map_temp", "map")

    #     if transformation:
    #         transformed_pose = tf2_geometry_msgs.do_transform_pose(mocap_pose, transformation)
    #     else:
    #         self.get_logger().warn("Using untransformed mocap pose due to missing transform")
    #         return

    #     # Time
    #     time_stamp = self.last_mocap_msg.header.stamp.sec + self.last_mocap_msg.header.stamp.nanosec / 1e9
    #     if self.start_time is None:
    #         self.start_time = time_stamp
    #         self.get_logger().info("Data logger start")
    #     relative_time = time_stamp - self.start_time

    #     mocap_x = transformed_pose.position.x * 1000
    #     mocap_y = transformed_pose.position.y * 1000
    #     _, _, mocap_yaw = euler_from_quaternion(transformed_pose.orientation)

    #     algorithm_pos = self.last_algorithm_msg.pose.pose
    #     _, _, algorithm_yaw = euler_from_quaternion(algorithm_pos.orientation)

    #     # Determine number of particles
    #     if self.last_particles_msg is not None:
    #         if isinstance(self.last_particles_msg, PoseArray):
    #             num_particles = len(self.last_particles_msg.poses)
    #         elif isinstance(self.last_particles_msg, ParticleCloud):
    #             num_particles = len(self.last_particles_msg.particles)
    #         else:
    #             num_particles = -1
    #     else:
    #         num_particles = -1

    #     # self.get_logger().warn(f"Particles {num_particles}")

    #     # Save to CSV
    #     with open(self.result_filename, mode='a', newline='') as file:
    #         writer = csv.writer(file)
    #         writer.writerow([
    #             relative_time,
    #             mocap_x, mocap_y, mocap_yaw,
    #             algorithm_pos.position.x * 1000, algorithm_pos.position.y * 1000, algorithm_yaw,
    #             num_particles
    #         ])

    #     # self.get_logger().info(f"Saved data at t={relative_time:.2f}s")

    #     # Publish mocap pose as odometry
    #     odom = Odometry()
    #     odom.header = self.last_mocap_msg.header
    #     odom.header.frame_id = "map"
    #     odom.pose.pose = transformed_pose
    #     odom.pose.pose.orientation = quaternion_from_euler(0, 0, mocap_yaw)  # Flatten Z rotation
    #     self.publisher.publish(odom)

    #     # Clear messages to avoid reusing old ones
    #     self.last_algorithm_msg = None
    #     self.last_mocap_msg = None