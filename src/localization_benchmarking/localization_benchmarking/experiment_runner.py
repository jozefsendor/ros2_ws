import yaml
import itertools
import subprocess
import os
import sys
import time
import shutil
import signal
import threading
from ament_index_python.packages import get_package_share_directory
import csv
import numpy as np
import matplotlib.pyplot as plt

def stream_output(process, prefix):
    """Continuously reads process output and prints it with a prefix."""
    for line in iter(process.stdout.readline, ""):
        print(f"[{prefix}] {line}", end="")
    for line in iter(process.stderr.readline, ""):
        print(f"[{prefix} ERROR] {line}", end="")

def run_experiment(algorithm, config_file, map_file, rosbag_filename, rosbag_file_dir):
    """Runs the experiment and plays a ROS 2 bag file, ensuring proper termination."""
    print(f"Running experiment with {algorithm} using {config_file}")

    if algorithm == 'amcl':
        algorithm_topic = '/amcl_pose'
    
    if algorithm == 'mrpt':
        algorithm_topic = '/pf_pose'

    launch_cmd = [
        "ros2", "launch", "localization_benchmarking", "run_experiment.launch.py",
        f"algorithm:={algorithm}", f"config_file:={config_file}", f"map_file:={map_file}", f"algorithm_topic:={algorithm_topic}", f"rosbag_filename:={rosbag_filename}"
    ]
    bag_cmd = ["ros2", "bag", "play", rosbag_file_dir]

    try:
        # Start the launch process
        launch_process = subprocess.Popen(
            launch_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
        )
        time.sleep(3)  # Wait for initialization

        # Start the bag process
        bag_process = subprocess.Popen(
            bag_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
        )

        # Stream output in separate threads
        thread1 = threading.Thread(target=stream_output, args=(launch_process, "LAUNCH"))
        thread2 = threading.Thread(target=stream_output, args=(bag_process, "BAG"))
        thread1.start()
        thread2.start()

        # Wait for the bag process to finish
        bag_process.wait()

        # Stop launch process after bag playback ends
        print("Bag playback finished. Stopping experiment...")
        launch_process.send_signal(signal.SIGINT)
        launch_process.wait()

        # Ensure threads finish
        thread1.join()
        thread2.join()

        # Return 0 if both processes were successful
        if launch_process.returncode == 0 and bag_process.returncode == 0:
            return 0  
        else:
            print(f"Error: launch process returned {launch_process.returncode}, bag process returned {bag_process.returncode}")
            return 1  

    except Exception as e:
        print(f"Unexpected error: {e}")
        return 1

def calculate_ade(predicted: np.ndarray, ground_truth: np.ndarray) -> tuple:
    """Calculates position and orientation errors."""
    position_errors = np.linalg.norm(predicted[:, :2] - ground_truth[:, :2], axis=1)
    angle_errors = np.degrees(np.abs(np.arctan2(np.sin(predicted[:, 2] - ground_truth[:, 2]),
                                                np.cos(predicted[:, 2] - ground_truth[:, 2]))))
    return position_errors, angle_errors

def calculate_pose_error(results_csv_dir):
    """Loads CSV file and computes position and orientation errors."""
    data = np.loadtxt(results_csv_dir, delimiter=',', skiprows=1)
    
    ground_truth = data[:, :3]
    predicted = data[:, 3:6]

    position_errors, angle_errors = calculate_ade(predicted, ground_truth)

    mean_position_error = np.mean(position_errors)
    mean_angle_error = np.mean(angle_errors)
    
    mean_pose_error = (mean_position_error + mean_angle_error) / 2

    return mean_pose_error, position_errors, angle_errors, ground_truth, predicted

def plot_results(algorithm, rosbag_filename):
    ros2_ws_dir = os.path.expanduser("~/ros2_ws")
    results_csv_dir = os.path.join(ros2_ws_dir, "results", "csv_files", rosbag_filename, algorithm, "results_best.csv")
    figures_dir = os.path.join(ros2_ws_dir, "results", "figures", rosbag_filename, algorithm)
    os.makedirs(figures_dir, exist_ok=True)

    data = np.loadtxt(results_csv_dir, delimiter=',', skiprows=1)
    ground_truth = data[:, :3]  
    predicted = data[:, 3:6] 
    position_errors = data[:, 6] 
    angle_errors = data[:, 7] 

    plt.figure(figsize=(7, 5))
    plt.scatter(ground_truth[:, 0], ground_truth[:, 1], label="Mocap", color="red", s=5)
    plt.scatter(predicted[:, 0], predicted[:, 1], label="Algorithm", color="blue", s=5)
    plt.xlabel('X [mm]')
    plt.ylabel('Y [mm]')
    plt.title('Position Comparison')
    plt.legend()
    plt.savefig(os.path.join(figures_dir, 'position_comparison.png'), dpi=300)

    plt.figure(figsize=(7, 5))
    fig, ax1 = plt.subplots(figsize=(7, 5))
    ax1.set_xlabel('Sample Index')
    ax1.set_ylabel('Position Error [mm]', color="blue")
    ax1.scatter(range(len(position_errors)), position_errors, label="Position Error", color="blue", marker="o", s=5)
    ax1.tick_params(axis='y', labelcolor="blue")
    ax2 = ax1.twinx()
    ax2.set_ylabel('Orientation Error [°]', color="red")
    ax2.scatter(range(len(angle_errors)), angle_errors, label="Orientation Error", color="red", marker="*", s=5)
    ax2.tick_params(axis='y', labelcolor="red")
    plt.title('Pose Errors')
    fig.tight_layout()
    plt.savefig(os.path.join(figures_dir, 'pose_errors.png'), dpi=300)
    plt.close(fig)


    mean_position_error = np.mean(position_errors)
    mean_angle_error = np.mean(angle_errors)

    plt.figure(figsize=(7, 5))
    plt.scatter(position_errors, angle_errors, color="blue", alpha=0.5, marker='o', label="Errors", s=5)
    plt.axvline(mean_position_error, color='blue', linestyle="--", label=f'Mean Position Error = {mean_position_error:.2f} mm')
    plt.axhline(mean_angle_error, color='green', linestyle="--", label=f'Mean Angle Error = {mean_angle_error:.2f}°')
    plt.xlabel("Position Error [mm]")
    plt.ylabel("Orientation Error [°]")
    plt.title("Error Distribution")
    plt.legend()
    plt.savefig(os.path.join(figures_dir, 'error_distribution.png'), dpi=300)

    plt.close('all')

def load_param_grid(yaml_file):
    """Loading params from YAML file"""
    with open(yaml_file, "r") as file:
        yaml_data = yaml.safe_load(file)
        return yaml_data.get("param_grid", {})
    
def main():
    
    # if len(sys.argv) != 5:
    #     print("Usage: experiment_runner.py <algorithm> <param_yaml> <rosbag_name> <map_filename>")
    #     sys.exit(1)

    # algorithm = sys.argv[1]
    # param_yaml = sys.argv[2]
    # rosbag_filename = sys.argv[3]

    # print(f"Starting {algorithm} experiments using {param_yaml}")

    algorithm = "mrpt"
    rosbag_filename = "test"
    map_filename = "test"
    params_filename = "mrpt_params"
    default_params_filename = "default.config"

    # algorithm = "amcl"
    # rosbag_filename = "test"
    # map_filename = "test"
    # params_filename = "amcl_params"
    # default_params_filename = "nav2_params"
    
    ros2_ws_dir = os.path.expanduser("~/ros2_ws")
    package_dir = get_package_share_directory('localization_benchmarking')
    config_file_dir = os.path.join(package_dir, "config", f'{params_filename}.yaml')
    default_config_file_dir = os.path.join(package_dir, "config", f'{default_params_filename}.yaml')
    config_file_best_dir = os.path.join(ros2_ws_dir, "results", "params", rosbag_filename, algorithm, f'{params_filename}_best.yaml')
    map_file_dir = os.path.join(package_dir, "maps", f'{map_filename}.yaml')
    rosbag_file_dir = os.path.join(ros2_ws_dir, "rosbag_files", rosbag_filename)
    results_csv_dir = os.path.join(ros2_ws_dir, "results", "csv_files", rosbag_filename, algorithm, "results.csv")
    results_csv_best_dir = os.path.join(ros2_ws_dir, "results", "csv_files", rosbag_filename, algorithm, "results_best.csv")

    best_mean_pose_error = float("inf")

    # Define the parameter search space
    param_grid = {
        ### mrpt
        # "initial_particles_per_m2": [1000, 2000],
        "rate_hz": [20.0],
        # "pf_options.BETA": [0.1, 0.5, 0.9], 
        # "pf_options.resamplingMethod": ["prMultinomial", "prResidual", "prStratified", "prSystematic"], 
        # "kld_options.KLD_minSampleSize": [10, 50, 100],  
        # "kld_options.KLD_maxSampleSize": [1000, 5000, 10000],  
        # "kld_options.KLD_binSize_XY": [0.1, 0.25, 0.5],
        # 
        ### amcl
        # "max_beams": [60,100],
        # "max_particles": [1000, 2000],
        # "min_particles": [100, 500], 
    }

    # Generate all parameter combinations
    all_combinations = list(itertools.product(*param_grid.values()))

    # Iterate over each parameter combination
    for values in all_combinations:
        params = dict(zip(param_grid.keys(), values))

        # Load the YAML configuration file
        with open(default_config_file_dir, "r") as file:
            yaml_data = yaml.safe_load(file)

        try:
            ros_params = yaml_data["/**"]["ros__parameters"]
            # ros_params["initial_particles_per_m2"] = params["initial_particles_per_m2"]
            ros_params["rate_hz"] = params["rate_hz"]
            # ros_params["pf_options"]["BETA"] = params["pf_options.BETA"]
            # ros_params["pf_options"]["resamplingMethod"] = params["pf_options.resamplingMethod"]
            # ros_params["kld_options"]["KLD_minSampleSize"] = params["kld_options.KLD_minSampleSize"]
            # ros_params["kld_options"]["KLD_maxSampleSize"] = params["kld_options.KLD_maxSampleSize"]
            # ros_params["kld_options"]["KLD_binSize_XY"] = params["kld_options.KLD_binSize_XY"]


            # ros_params = yaml_data["amcl"]["ros__parameters"]
            # ros_params["max_beams"] = params["max_beams"]
            # ros_params["max_particles"] = params["max_particles"]
            # ros_params["min_particles"] = params["min_particles"]

            # Save the modified YAML file
            with open(config_file_dir, "w") as file:
                yaml.safe_dump(yaml_data, file, default_flow_style=False)

            print(f"Updated configuration: {params}")

        except KeyError as e:
            print(f"Error: Missing key {e} in YAML structure!")

        # Run the experiment
        output = run_experiment(algorithm, config_file_dir, map_file_dir, rosbag_filename, rosbag_file_dir)

        # Analyze the output to extract MSE
        if not output and os.path.exists(results_csv_dir): 
            pose_mean_error, position_errors, angle_errors, ground_truth, predicted = calculate_pose_error(results_csv_dir)
            print(f"Pose mean error: {pose_mean_error}")

            if pose_mean_error < best_mean_pose_error:
                best_mean_pose_error = pose_mean_error
                if not os.path.exists(config_file_best_dir):
                    os.makedirs(config_file_best_dir)
                shutil.copy(config_file_dir, config_file_best_dir)

            with open(results_csv_best_dir, mode='w', newline='') as file:
                writer = csv.writer(file)
                writer.writerow([
                    "x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]",  
                    "x_pose[mm]", "y_pose[mm]", "theta[rad]", 
                    "p_err[mm]", "a_err[mm]"
                ])
                for gt, pred, p_err, a_err in zip(ground_truth, predicted, position_errors, angle_errors):
                    writer.writerow([
                        gt[0], gt[1], gt[2],  # Mocap (ground truth)
                        pred[0], pred[1], pred[2],  # Algorithm prediction
                        p_err, a_err  # Errors
                    ])


    plot_results(algorithm, rosbag_filename)

if __name__ == "__main__":
    main()
