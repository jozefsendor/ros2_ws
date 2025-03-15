from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, GroupAction
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration, PythonExpression
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch.actions import TimerAction
import os
from launch.actions import LogInfo
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    package_dir = get_package_share_directory('localization_benchmarking')

    # Arguments declaration
    algorithm_arg = DeclareLaunchArgument(
        'algorithm',
        default_value='mrpt',
        description='Localization algorithm to use (mrpt or amcl)'
    )
    algorithm_topic_arg = DeclareLaunchArgument(
        'algorithm_topic',
        default_value='/pf_pose',
        description='Topic for data logger node'
    )
    config_file_arg = DeclareLaunchArgument(
        'config_file',
        default_value=os.path.join(package_dir, 'config', 'mrpt_params.yaml'),
        description='Path to the localization algorithm config file'
    )
    map_file_arg = DeclareLaunchArgument(
        'map_file',
        default_value=os.path.join(package_dir, 'maps', 'lab7.yaml'),
        description='Path to the map file'
    )
    rosbag_filename_arg = DeclareLaunchArgument(
        'rosbag_filename',
        default_value='test',
        description='Rosbag filename'
    )
    
    algorithm = LaunchConfiguration('algorithm')
    algorithm_topic = LaunchConfiguration('algorithm_topic')
    config_file = LaunchConfiguration('config_file')
    map_file = LaunchConfiguration('map_file')
    rosbag_filename = LaunchConfiguration('rosbag_filename')

    mrpt_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('mrpt_pf_localization'), 'launch',
            'localization.launch.py')),
        launch_arguments={
            'pf_params_file': config_file,
            'log_level': 'INFO',
            'log_level_core': 'INFO',
            'topic_sensors_2d_scan': '/tb6/scan',
            'use_composable': 'false',
            'topic_sensors_point_clouds': '',
            'base_link_frame_id': 'base_link',
            'odom_frame_id': 'odom',
            'global_frame_id': 'map',
        }.items()
    )

    map_server_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('mrpt_map_server'), 'launch',
            'mrpt_map_server.launch.py')),
        launch_arguments={'map_yaml_file': map_file}.items()
    )

    amcl_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('nav2_bringup'), 'launch',
            'localization_launch.py')),
        launch_arguments={
            'map': map_file,
            'params_file': config_file,
            'use_sim_time': 'false',
        }.items()
    )

    rviz2_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', os.path.join(get_package_share_directory('localization_benchmarking'), 'rviz', 'rviz.rviz')]
    )

    data_logger_node = Node(
        package='localization_benchmarking',
        executable='data_logger',
        name='data_logger_node',
        parameters=[{
            'frequency': 10.0,
            'path_name': rosbag_filename,
            'algorithm': algorithm,
            'algorithm_topic': algorithm_topic
        }]
    )

    return LaunchDescription([
        algorithm_arg,
        config_file_arg,
        map_file_arg,

        # Uruchomienie AMCL jeśli wybrano "amcl"
        GroupAction([
            amcl_launch,
        ], condition=IfCondition(PythonExpression(["'", algorithm, "' == 'amcl'"]))),

        # Uruchomienie MRPT + map_server jeśli wybrano "mrpt"
        GroupAction([
            map_server_launch,
            mrpt_launch,
        ], condition=IfCondition(PythonExpression(["'", algorithm, "' == 'mrpt'"]))),

        TimerAction(period=1.0, actions=[data_logger_node]),
    ])