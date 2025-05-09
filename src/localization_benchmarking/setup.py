from setuptools import find_packages, setup
from glob import glob
import os

package_name = 'localization_benchmarking'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),
        (os.path.join('share', package_name, 'config'), glob('config/*.yaml')),
        (os.path.join('share', package_name, 'maps'), glob('maps/*')),
        (os.path.join('share', package_name, 'rviz'), glob('rviz/*.rviz')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='jozef',
    maintainer_email='jozef.sendor20@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'experiment_runner = localization_benchmarking.experiment_runner:main',
            'data_logger = localization_benchmarking.data_logger:main',
            'mocap_sender_node = localization_benchmarking.mocap_sender:main',
            'path_executer = localization_benchmarking.path_executer:main',
        ],
    },
)
