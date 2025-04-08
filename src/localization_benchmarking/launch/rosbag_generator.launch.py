from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction, ExecuteProcess
from launch.event_handlers import OnProcessExit
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource
import os
import yaml
import shutil

def generate_launch_description():
    declare_namespace = DeclareLaunchArgument(
        'namespace',
        default_value='',
        description='Namespace for the control node'
    )

    experiment_params = os.path.join(
        get_package_share_directory('localization_benchmarking'),
        'config',
        'experiment_params.yaml',
    )

    if not os.path.exists(experiment_params):
        raise FileNotFoundError(f"File {experiment_params} not found")

    with open(experiment_params, 'r') as file:
        params = yaml.safe_load(file)

    path_executer_params = params.get('rosbag_generator', {}).get('ros__parameters', {})
    print(path_executer_params) 

    path_executer_node = Node(
        package='localization_benchmarking', 
        executable='path_executer',
        name='path_executer',
        parameters=[path_executer_params],
    )

    mocap_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(os.path.join(
            get_package_share_directory('mocap4r2_optitrack_driver'), 'launch',
            'optitrack2.launch.py'))
    )

    activate_mocap_node = ExecuteProcess(
        cmd=['ros2', 'lifecycle', 'set', '/mocap4r2_optitrack_driver_node', 'activate'],
        output='screen'
    )

    return LaunchDescription([
        declare_namespace,
        mocap_launch,
        TimerAction(period=3.0, actions=[activate_mocap_node]),
        TimerAction(period=1.0, actions=[path_executer_node]),
    ])