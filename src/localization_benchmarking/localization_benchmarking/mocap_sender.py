import rclpy
from rclpy.node import Node
from mocap4r2_msgs.msg import RigidBodies
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Pose, Twist, Quaternion
from std_msgs.msg import Header
import math
import numpy as np


class MocapSender(Node):

    def __init__(self):
        super().__init__('mocap_sender')
        self.get_logger().info("mocap sender startup")
        self.mocap_sub = self.create_subscription(RigidBodies,'/rigid_bodies', self.save_mocap_pose, 10)
        self.publisher = self.create_publisher(Odometry, '/mocap_pose', 10)

    def save_mocap_pose(self, msg):
        mocap_pos = msg.rigidbodies[0].pose
        mocap_yaw = self.yaw_from_quaternion(mocap_pos.orientation) + np.deg2rad(77)
        # mocap_yaw = np.rad2deg(mocap_yaw)
        # self.get_logger().info(f'Publishing yaw={mocap_yaw}')
        # self.get_logger().info(f' ')
       

        # Przekształcenie zmodyfikowanego kąta yaw na kwaternion
        new_orientation = self.quaternion_from_euler(0, 0, mocap_yaw)

        odom = Odometry()
        odom.header = Header()
        odom.header.stamp = msg.header.stamp
        odom.header.frame_id = "map" 
        odom.pose.pose.position.x = mocap_pos.position.x
        odom.pose.pose.position.y = mocap_pos.position.y
        odom.pose.pose.position.z = mocap_pos.position.z
        
        # Przepisanie zmodyfikowanej orientacji
        odom.pose.pose.orientation.x = new_orientation[0]
        odom.pose.pose.orientation.y = new_orientation[1]
        odom.pose.pose.orientation.z = new_orientation[2]
        odom.pose.pose.orientation.w = new_orientation[3]

    # def save_mocap_pose(self, msg):
    #     mocap_pos = msg.rigidbodies[0].pose
    #     mocap_yaw = self.yaw_from_quaternion(mocap_pos.orientation) - np.pi/2
    #     odom = Odometry()
    #     odom.header = Header()
    #     odom.header.stamp = msg.header.stamp
    #     odom.header.frame_id = "odom" 
    #     odom.pose.pose.position.x = mocap_pos.position.x
    #     odom.pose.pose.position.y = mocap_pos.position.y
    #     odom.pose.pose.position.z = mocap_pos.position.z
    #     odom.pose.pose.orientation = mocap_pos.orientation

        # Logujemy tylko pozycję i orientację
        #self.get_logger().info(f'Publishing Odometry: position x={odom.pose.pose.position.x}, y={odom.pose.pose.position.y}, z={odom.pose.pose.position.z}, orientation={odom.pose.pose.orientation}, yaw={mocap_yaw}')
        
        self.publisher.publish(odom)
    
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

    def quaternion_from_euler(self, roll, pitch, yaw):
        """
        Konwertuje kąty Eulera (roll, pitch, yaw) na kwaternion.

        :param roll: Kąt obrotu wokół osi X (w radianach)
        :param pitch: Kąt obrotu wokół osi Y (w radianach)
        :param yaw: Kąt obrotu wokół osi Z (w radianach)
        :return: Kwaternion jako krotka (x, y, z, w)
        """
        cy = math.cos(yaw * 0.5)
        sy = math.sin(yaw * 0.5)
        cp = math.cos(pitch * 0.5)
        sp = math.sin(pitch * 0.5)
        cr = math.cos(roll * 0.5)
        sr = math.sin(roll * 0.5)

        x = sr * cp * cy - cr * sp * sy
        y = cr * sp * cy + sr * cp * sy
        z = cr * cp * sy - sr * sp * cy
        w = cr * cp * cy + sr * sp * sy

        return (x, y, z, w)

def main(args=None):
    rclpy.init(args=args)
    mocap_sender = MocapSender()
    rclpy.spin(mocap_sender)
    mocap_sender.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
