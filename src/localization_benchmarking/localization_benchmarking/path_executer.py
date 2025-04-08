import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from .paths_def import PATHS
import time
import sys
import shutil
import signal
import os
import subprocess

class PathExecuter(Node):
    def __init__(self):
        super().__init__('path_executer')
        time.sleep(2.0)  # Można usunąć lub zmniejszyć

        self.declare_parameter('path_name', "square")
        self.declare_parameter('path_execution', False)
        self.declare_parameter('timer_period', 0.1) 
        self.declare_parameter('rosbags_dir', "")
        self.declare_parameter('rosbag_name', "")   

        self.path_name = self.get_parameter('path_name').value
        self.path_execution = self.get_parameter('path_execution').value
        self.timer_period = self.get_parameter('timer_period').value
        self.rosbags_dir = os.path.expanduser(self.get_parameter('rosbags_dir').value)  # Rozwijamy ~
        self.rosbag_name = self.get_parameter('rosbag_name').value

        self.get_logger().info(f"Path: {self.path_name}")
        self.get_logger().info(f"Execute: {self.path_execution}")

        if self.path_name == "all":
            self.paths_queue = ["square", "eight"]
        else:
            self.paths_queue = [self.path_name]

        self.path_index = 0
        self.path_function = PATHS.get(self.paths_queue[self.path_index])
        if self.path_function is None:
            self.get_logger().error(f"Path '{self.path_name}' not found in paths_def.py")
            rclpy.shutdown()

        self.rosbags_dir = os.path.join(self.rosbags_dir, self.rosbag_name)
        self.get_logger().info(f"Rosbag directory: {self.rosbags_dir}")
        
        if os.path.exists(self.rosbags_dir):
            shutil.rmtree(self.rosbags_dir)

        self.start_time = time.time()
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(self.timer_period, self.update_velocity)

        self.get_logger().info("Starting rosbag record...")
        self.rosbag_process = subprocess.Popen(
            ['ros2', 'bag', 'record', '-o', self.rosbags_dir, 
            '/cmd_vel', '/tf', '/tf_static', '/tb6/scan', 
            '/robot_description', '/joint_states', '/markers', 
            '/odom_raw', 'rigid_bodies'], 
            stdout=subprocess.PIPE, stderr=subprocess.PIPE
        )
        self.get_logger().info(f"rosbag record started with PID: {self.rosbag_process.pid}")


    def update_velocity(self):
        if not self.path_execution:
            self.switch_or_shutdown()
            return
        
        elapsed_time = time.time() - self.start_time
        msg = Twist()
        msg.linear.x, msg.angular.z, self.path_execution = self.path_function(elapsed_time)

        self.publisher.publish(msg)
        self.get_logger().info(f"[{self.paths_queue[self.path_index]}] Publishing cmd_vel: {msg.linear.x}, {msg.angular.z}")
    
    def switch_or_shutdown(self):
        self.get_logger().info(f"Finished path: {self.paths_queue[self.path_index]}")

        self.path_index += 1
        if self.path_index < len(self.paths_queue):
            # Switch to next path
            self.path_function = PATHS.get(self.paths_queue[self.path_index])
            if self.path_function is None:
                self.get_logger().error(f"Path '{self.paths_queue[self.path_index]}' not found in paths_def.py")
                self.stop_and_shutdown()
                return
            self.get_logger().info(f"Switching to next path: {self.paths_queue[self.path_index]}")
            self.path_execution = True
            self.start_time = time.time()
        else:
            # All paths done
            self.stop_and_shutdown()

    def stop_and_shutdown(self):
        self.get_logger().info("Stopping execution...")

        msg = Twist()
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        self.publisher.publish(msg)

        if self.rosbag_process.poll() is None:
            self.get_logger().info("Terminating rosbag process...")
            os.killpg(os.getpgid(self.rosbag_process.pid), signal.SIGINT)  # Wysyłamy SIGINT do całej grupy procesów
            try:
                self.rosbag_process.wait(timeout=5)
            except subprocess.TimeoutExpired:
                self.get_logger().error("rosbag process did not terminate in time, forcing kill.")
                os.killpg(os.getpgid(self.rosbag_process.pid), signal.SIGKILL)  # Jeśli nie działa, SIGKILL

        self.get_logger().info("Shutdown complete.")
        self.timer.cancel()
        self.destroy_node()  
        rclpy.shutdown()  

def main(args=None):
    rclpy.init(args=args)
    path_executer_node = PathExecuter()
    try:
        rclpy.spin(path_executer_node)
    except KeyboardInterrupt:
        print("KeyboardInterrupt caught. Shutting down.")
    finally:
        msg = Twist()
        msg.linear.x = 0.0
        msg.angular.z = 0.0
        path_executer_node.publisher.publish(msg)
        path_executer_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
