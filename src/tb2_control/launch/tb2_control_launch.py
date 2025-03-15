from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import LaunchConfiguration
import os

def generate_launch_description():

    declare_namespace = DeclareLaunchArgument(
        'namespace',
        default_value='',
        description='Namespace for the control node'
    )

    tb2_controller_params = os.path.join(
        get_package_share_directory('tb2_control'),
        'config',
        'controller_params.yaml',
    )
    tb2_controller_node = Node(
        package='tb2_control', 
        executable='tb2_controller',
        #namespace=LaunchConfiguration('namespace'),
        name='tb2_controller',
        parameters=[tb2_controller_params],
    )
    return LaunchDescription([ 
        #declare_namespace,
        tb2_controller_node,   
    ])
