import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from .paths_def import PATHS
import time

class PathPlanner(Node):
    def __init__(self):
        super().__init__('tb2_controller')
        #namespace = self.get_namespace()
        #self.get_logger().info(f"{namespace} tb2_control startup")
        time.sleep(2.0)
        self.declare_parameter('path_name', "square")
        self.declare_parameter('path_execution', False)
        self.declare_parameter('timer_period', 0.1)    
        self.path_name = self.get_parameter('path_name').value
        self.path_execution = self.get_parameter('path_execution').value
        self.timer_period = self.get_parameter('timer_period').value
    
        self.get_logger().info(f"Path: {self.path_name}")
        self.get_logger().info(f"Execute: {self.path_execution}")

        self.path_function = PATHS.get(self.path_name)
        if self.path_function is None:
            self.get_logger().error(f"Path '{self.path_name}' not found in paths_def.py")
            rclpy.shutdown()

        self.start_time = time.time()
        #self.publisher = self.create_publisher(Twist, f'{namespace}/cmd_vel', 10)
        self.publisher = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer = self.create_timer(self.timer_period, self.update_velocity)

    def update_velocity(self):
       
        if not self.path_execution:
            msg = Twist()
            self.publisher.publish(msg)
            self.get_logger().info("Path execution complete.")
            return
        
        current_time = time.time()
        elapsed_time = current_time - self.start_time

        msg = Twist()
        msg.linear.x, msg.angular.z, self.path_execution = self.path_function(elapsed_time)

        self.publisher.publish(msg)
        self.get_logger().info(f"Publishing cmd_vel: {msg.linear.x}, {msg.angular.z}")

def main(args=None):
    rclpy.init(args=args)
    planner_node = PathPlanner()
    try:
        rclpy.spin(planner_node)
    except KeyboardInterrupt:
        print("KeyboardInterrupt caught. Shutting down.")
    finally:
        msg = Twist()
        msg.linear.x = 0
        msg.angular.z = 0
        planner_node.publisher.publish(msg)
        planner_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
