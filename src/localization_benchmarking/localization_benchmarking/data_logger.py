import rclpy
from rclpy.node import Node
from message_filters import Subscriber, ApproximateTimeSynchronizer
from mocap4r2_msgs.msg import RigidBodies
from nav_msgs.msg import Odometry
from geometry_msgs.msg import PoseWithCovarianceStamped
import csv
import os
import numpy as np

class DataLogger(Node):
    def __init__(self):
        super().__init__('data_logger_node')
        self.get_logger().info('data_logger_node startup')
        
        # declare arguments
        self.declare_parameter('frequency', 1.0)
        self.frequency = self.get_parameter('frequency').value
        self.declare_parameter('path_name', "test")
        self.path_name = self.get_parameter('path_name').value
        self.declare_parameter('algorithm', "mrpt")
        self.algorithm = self.get_parameter('algorithm').value
        self.declare_parameter('algorithm_topic', "/pf_pose")
        self.algorithm_topic = self.get_parameter('algorithm_topic').value
        self.get_logger().info(f"{self.path_name}")
        self.get_logger().info(f"{self.algorithm_topic}")
        
        # defining paths to save results
        ros2_ws_dir = os.path.expanduser("~/ros2_ws")
        csv_path = os.path.join(ros2_ws_dir,'results', 'csv_files')
        os.makedirs(csv_path, exist_ok=True)
        self.results_dir = os.path.join(csv_path, self.path_name, self.algorithm)
        os.makedirs(self.results_dir, exist_ok=True)
        self.result_filename = os.path.join(self.results_dir, "results.csv")
        self.clear_csv_file()

        self.timer_period = 1/self.frequency
        self.timer = self.create_timer(self.timer_period, self.save_poses)

        self.algorithm_sub = self.create_subscription(PoseWithCovarianceStamped,self.algorithm_topic, self.save_algorithm_pose,10)
        self.mocap_sub = self.create_subscription(RigidBodies,'/rigid_bodies', self.save_mocap_pose,10)

        self.last_algorithm_data = [0.0,0.0,0.0]
        self.last_mocap_data = [0.0,0.0,0.0]

        self.mocap_initial_pose = None 

    def clear_csv_file(self):
        """Clear the contents of the CSV file initially."""
        if os.path.isfile(self.result_filename):
            with open(self.result_filename, mode='w', newline='') as file:
                writer = csv.writer(file)
                # Write the header, effectively clearing any previous data
                writer.writerow(["x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]", 
                                 "x_pose[mm]", "y_pose[mm]", "theta[rad]"])
    def save_poses(self):
        if self.last_algorithm_data and self.last_mocap_data:
            file_exists = os.path.isfile(self.result_filename)  
            with open(self.result_filename, mode='a', newline='') as file:
                writer = csv.writer(file)
                if not file_exists:
                    writer.writerow(["x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]", 
                                     "x_pose[mm]", "y_pose[mm]", "theta[rad]"])
                writer.writerow(self.last_mocap_data + self.last_algorithm_data)


    def save_algorithm_pose(self, msg):
        algorithm_pos = msg.pose.pose
        algorithm_yaw = self.yaw_from_quaternion(algorithm_pos.orientation)

        self.last_algorithm_data[0] = algorithm_pos.position.x*1000
        self.last_algorithm_data[1] = algorithm_pos.position.y*1000
        self.last_algorithm_data[2] = algorithm_yaw
       

    def save_mocap_pose(self, msg):
        mocap_pos = msg.rigidbodies[0].pose
        mocap_yaw = self.yaw_from_quaternion(mocap_pos.orientation)

        if self.mocap_initial_pose is None:
            self.mocap_initial_pose = [mocap_pos.position.x, mocap_pos.position.y, mocap_yaw]
            # self.get_logger().info(f"Set Mocap initial pose: {self.mocap_initial_pose}")

        self.last_mocap_data[0] = (mocap_pos.position.x - self.mocap_initial_pose[0]) * 1000
        self.last_mocap_data[1] = (mocap_pos.position.y - self.mocap_initial_pose[1]) * 1000
        self.last_mocap_data[2] = mocap_yaw - self.mocap_initial_pose[2]
       

    def yaw_from_quaternion(self, quaternion):
        """
        Converts quaternion (w in last place) to yaw angle
        quaternion = [x, y, z, w]
        """
        x = quaternion.x
        y = quaternion.y
        z = quaternion.z
        w = quaternion.w

        siny_cosp = 2 * (w * z + x * y)
        cosy_cosp = 1 - 2 * (y * y + z * z)
        yaw = np.arctan2(siny_cosp, cosy_cosp)

        return yaw
    
def main(args=None):
    rclpy.init(args=args)
    logger_node = DataLogger()
    rclpy.spin(logger_node)
    logger_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()