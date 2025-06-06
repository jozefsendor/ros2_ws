import logging
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
import matplotlib as mpl
from copy import deepcopy
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseWithCovarianceStamped

# Setup logger
logger = logging.getLogger('experiment_logger')
logger.setLevel(logging.INFO) 
console_handler = logging.StreamHandler()
formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
console_handler.setFormatter(formatter)
logger.addHandler(console_handler)


def deep_update(d, u):
    for k, v in u.items():
        if isinstance(v, dict) and isinstance(d.get(k), dict):
            deep_update(d[k], v)
        else:
            d[k] = v

def build_nested_param_dict(path, value):
    keys = path.split('.')
    d = current = {}
    for key in keys[:-1]:
        current[key] = {}
        current = current[key]
    current[keys[-1]] = value
    return d

def set_logging_level(level):
    """Adjust logging level dynamically."""
    levels = {
        'DEBUG': logging.DEBUG,
        'INFO': logging.INFO,
        'WARNING': logging.WARNING,
        'ERROR': logging.ERROR,
        'CRITICAL': logging.CRITICAL
    }
    logger.setLevel(levels.get(level, logging.INFO))

def stream_output(process, prefix):
    """Continuously reads process output and prints it with a prefix."""
    for line in iter(process.stdout.readline, ""):
        logger.info(f"[{prefix}] {line}")
    for line in iter(process.stderr.readline, ""):
        logger.error(f"[{prefix} ERROR] {line}")

def publish_initial_pose(x=0.0, y=0.0, yaw_deg=0.0):
    if not rclpy.ok():
        rclpy.init()

    node = rclpy.create_node('initial_pose_publisher')
    publisher = node.create_publisher(PoseWithCovarianceStamped, '/initialpose', 10)

    msg = PoseWithCovarianceStamped()
    msg.header.stamp = node.get_clock().now().to_msg()
    msg.header.frame_id = 'map'

    msg.pose.pose.position.x = x
    msg.pose.pose.position.y = y

    # Yaw to quaternion
    yaw_rad = np.deg2rad(yaw_deg)
    msg.pose.pose.orientation.x = 0.0
    msg.pose.pose.orientation.y = 0.0
    msg.pose.pose.orientation.z = np.sin(yaw_rad / 2.0)
    msg.pose.pose.orientation.w = np.cos(yaw_rad / 2.0)

    # Covariance
    cov = np.zeros((6, 6))
    cov[0, 0] = 0.25
    cov[1, 1] = 0.25
    cov[2, 2] = 1e-9
    cov[3, 3] = 1e-9
    cov[4, 4] = 1e-9
    cov[5, 5] = 0.05
    msg.pose.covariance = cov.flatten().tolist()

    # Wait until publisher is ready
    start_time = node.get_clock().now().nanoseconds
    timeout_ns = 3e9  # 3 seconds
    while node.get_clock().now().nanoseconds - start_time < timeout_ns:
        rclpy.spin_once(node, timeout_sec=0.1)
        if publisher.get_subscription_count() > 0:
            break
    logger.error(f"!!!!!!!!!!!  !!!!!!!!!!!!  Pose: {msg.pose.pose}")
    publisher.publish(msg)
    rclpy.spin_once(node, timeout_sec=0.2)

    node.destroy_node()
    rclpy.shutdown()

def extract_initial_pose_from_config(config_file_path, algorithm):
    with open(config_file_path, 'r') as f:
        config = yaml.safe_load(f)

    if algorithm == 'amcl':
        try:
            pose = config['amcl']['ros__parameters']['initial_pose']
            return pose['x'], pose['y'], pose['yaw']
        except KeyError as e:
            raise RuntimeError(f"Missing initial_pose in AMCL config: {e}")

    elif algorithm == 'mrpt':
        try:
            pose = config['/**']['ros__parameters']['initial_pose']['mean']
            return pose['x'], pose['y'], pose['yaw']
        except KeyError as e:
            raise RuntimeError(f"Missing initial_pose in MRPT config: {e}")
    
    raise ValueError(f"Unknown algorithm: {algorithm}")


def run_experiment(algorithm, config_file, map_file, rosbag_filename, rosbag_file_dir, csv_path):
    """Runs the experiment and plays a ROS 2 bag file, ensuring proper termination."""
    logger.info(f"Running experiment with {algorithm} using {config_file}")

    if algorithm == 'amcl':
        algorithm_topic = '/amcl_pose'
    
    if algorithm == 'mrpt':
        algorithm_topic = '/pf_pose'
    launch_cmd = [
        "ros2", "launch", "localization_benchmarking", "run_experiment.launch.py",
        f"algorithm:={algorithm}", f"config_file:={config_file}", f"map_file:={map_file}",
        f"algorithm_topic:={algorithm_topic}", f"rosbag_filename:={rosbag_filename}",
        f"csv_path:={csv_path}"
    ]

    logger.debug(f"Launch command: {launch_cmd}")

    bag_cmd = ["ros2", "bag", "play", rosbag_file_dir]

    try:
        # Start the launch process
        launch_process = subprocess.Popen(
            launch_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
        )
        thread1 = threading.Thread(target=stream_output, args=(launch_process, "LAUNCH"))
        thread1.start()

        # Wait for the launch to initialize
        time.sleep(8)

        x, y, yaw = extract_initial_pose_from_config(config_file, algorithm)
        publish_initial_pose(x=x, y=y, yaw_deg=yaw)


        # Start the bag process
        bag_process = subprocess.Popen(
            bag_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True
        )
        # thread2 = threading.Thread(target=stream_output, args=(bag_process, "BAG"))
        # thread2.start()

        # Wait for the bag process to finish
        bag_process.wait()

        # Stop launch process after bag playback ends
        logger.info("Bag playback finished. Stopping experiment...")
        launch_process.send_signal(signal.SIGINT)
        launch_process.wait()

        # Ensure threads finish
        thread1.join()
        # thread2.join()

        # Return 0 if both processes were successful
        if launch_process.returncode == 0 and bag_process.returncode == 0:
            return 0  
        else:
            logger.error(f"Error: launch process returned {launch_process.returncode}, bag process returned {bag_process.returncode}")
            return 1  

    except Exception as e:
        logger.exception(f"Unexpected error: {e}")
        return 1

def calculate_ade(predicted: np.ndarray, ground_truth: np.ndarray, valid_mask: np.ndarray) -> tuple:
    """
    Calculates position and orientation errors.
    For invalid poses (valid_mask == 0), returns NaN.
    """
    position_errors = np.full(len(predicted), np.nan)
    angle_errors = np.full(len(predicted), np.nan)

    # Indeksy poprawnych próbek
    valid_indices = np.where(valid_mask == 1)[0]

    if len(valid_indices) > 0:
        pos_err = np.linalg.norm(predicted[valid_indices, :2] - ground_truth[valid_indices, :2], axis=1)
        ang_err = np.degrees(np.abs(np.arctan2(
            np.sin(predicted[valid_indices, 2] - ground_truth[valid_indices, 2]),
            np.cos(predicted[valid_indices, 2] - ground_truth[valid_indices, 2])
        )))

        # Wstawienie błędów tylko dla poprawnych pozycji
        position_errors[valid_indices] = pos_err
        angle_errors[valid_indices] = ang_err

    return position_errors, angle_errors


def calculate_pose_error(results_csv_dir, outlier_percent=10):
    """Loads CSV file and computes position and orientation errors,
    discarding outlier_percent% extreme values."""
    try:
        data = np.loadtxt(results_csv_dir, delimiter=',', skiprows=1)
    except Exception as e:
        logger.error(f"Error loading CSV {results_csv_dir}: {e}")
        return float('inf'), float('inf')

    time_stamps = data[:,0]
    ground_truth = data[:, 1:4]
    predicted = data[:, 4:7]
    num_particles = data[:,7]
    valid_mask = data[:, -1] == 1 

    # Calculate errors
    position_errors, angle_errors = calculate_ade(predicted, ground_truth, valid_mask)

    # Sort errors and discard outlier_percent% of extreme values
    def discard_outliers(errors, percent):
        n = len(errors)
        k = int(n * percent / 100)
        return np.sort(errors)[k:n-k] if n > 2*k else errors  # Ensure at least some data remains
    
    filtered_position_errors = discard_outliers(position_errors, outlier_percent)
    filtered_angle_errors = discard_outliers(angle_errors, outlier_percent)

    mean_position_error = np.nanmean(filtered_position_errors)
    mean_angle_error = np.nanmean(filtered_angle_errors)

    # Save updated results
    with open(results_csv_dir, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow([
            "time_stamp[s]",
            "x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]",  
            "x_pose[mm]", "y_pose[mm]", "theta[rad]", 
            "p_err[mm]", "a_err[mm]", "num_particles", "valid_pose"
        ])
        filtered_indices = np.isin(position_errors, filtered_position_errors) 
        for ts, gt, pred, p_err, a_err, p_num, v_mask, keep in zip(time_stamps, ground_truth, predicted, position_errors, angle_errors, num_particles, valid_mask, filtered_indices):
            if keep:
                valid_pose = 1 if v_mask else 0
                writer.writerow([ts, gt[0], gt[1], gt[2], pred[0], pred[1], pred[2], p_err, a_err, p_num, valid_pose])


    return mean_position_error, mean_angle_error

def plot_results(algorithm, rosbag_filename, results_dir):


    plt.style.use("seaborn-paper")
    mpl.rcParams.update({
        "font.size": 10,
        "axes.titlesize": 11,
        "axes.labelsize": 10,
        "legend.fontsize": "small",
        "legend.frameon": True,
        "legend.facecolor": "white"
    })
    export_format = 'pdf'

    results_csv_dir = os.path.join(results_dir, "results.csv")
    figures_dir = os.path.join(results_dir, "figures")
    os.makedirs(figures_dir, exist_ok=True)
    
    # Załaduj dane z pliku CSV
    data = np.loadtxt(results_csv_dir, delimiter=',', skiprows=1)
    
    # Wydzielanie danych
    time_stamps = data[:,0]
    ground_truth = data[:, 1:4]  
    predicted = data[:, 4:7] 
    position_errors = data[:, 7] 
    angle_errors = data[:, 8] 
    valid_mask = data[:, -1] == 1  # Mask for valid points
    
    invalid_mask = ~valid_mask

    plt.figure(figsize=(6, 4))
    plt.scatter(ground_truth[invalid_mask, 0], ground_truth[invalid_mask, 1], label="MoCap (no alg)", color="black", s=10)
    plt.scatter(ground_truth[valid_mask, 0], ground_truth[valid_mask, 1], label="MoCap (with alg)", color="red", s=5)
    plt.scatter(predicted[valid_mask, 0], predicted[valid_mask, 1], label="Algorithm", color="blue", s=5)
    plt.xlabel('X [mm]')
    plt.ylabel('Y [mm]')
    plt.title('Position Comparison with Missing Estimates')
    legend = plt.legend(loc='upper right', fontsize='small', frameon=True)
    legend.get_frame().set_facecolor('white')
    plt.savefig(os.path.join(figures_dir, f'position_comparison_extended.{export_format}'), dpi=300, bbox_inches='tight')

    plt.figure(figsize=(6, 4))
    plt.scatter(ground_truth[:, 0], ground_truth[:, 1], label="MoCap", color="red", s=5)
    plt.scatter(predicted[:, 0], predicted[:, 1], label="Algorithm", color="blue", s=5)
    plt.xlabel('X [mm]')
    plt.ylabel('Y [mm]')
    plt.title('Position Comparison')
    legend = plt.legend(loc='upper right', fontsize='small', frameon=True)
    legend.get_frame().set_facecolor('white')
    plt.savefig(os.path.join(figures_dir, f'position_comparison.{export_format}'), dpi=300, bbox_inches='tight')

    valid_idx_pos = ~np.isnan(position_errors)
    valid_idx_ang = ~np.isnan(angle_errors)

    mean_position_error = np.nanmean(position_errors)
    mean_angle_error = np.nanmean(angle_errors)

    fig, ax1 = plt.subplots(figsize=(6, 4))
    ax1.set_xlabel('Sample Index')
    ax1.set_ylabel('Position Error [mm]', color="blue")
    ax1.scatter(np.where(valid_idx_pos)[0], position_errors[valid_idx_pos], color="blue", marker="o", s=5)
    ax1.axhline(mean_position_error, color='blue', linestyle="--", label=f'Mean Position Error = {mean_position_error:.2f} mm')
    ax1.tick_params(axis='y', labelcolor="blue")

    ax2 = ax1.twinx()
    ax2.set_ylabel('Orientation Error [°]', color="red")
    ax2.scatter(np.where(valid_idx_ang)[0], angle_errors[valid_idx_ang], color="red", marker="o", s=5)
    ax2.axhline(mean_angle_error, color='red', linestyle="--", label=f'Mean Angle Error = {mean_angle_error:.2f}°')
    ax2.tick_params(axis='y', labelcolor="red")

    # Zbieramy legendy i umieszczamy w rogu osi (wewnątrz wykresu)
    lines_1, labels_1 = ax1.get_legend_handles_labels()
    lines_2, labels_2 = ax2.get_legend_handles_labels()
    legend = ax1.legend(
        lines_1 + lines_2, labels_1 + labels_2,
        loc='upper right', frameon=True, fontsize='small'
    )
    legend.get_frame().set_facecolor('white')

    plt.title('Pose Errors')
    fig.tight_layout()
    plt.savefig(os.path.join(figures_dir, f'pose_errors.{export_format}'), dpi=300, bbox_inches='tight')
    plt.close(fig)



    plt.figure(figsize=(6, 4))
    plt.scatter(position_errors[valid_idx_pos], angle_errors[valid_idx_pos], color="blue", alpha=0.5, marker='o', label="Errors", s=5)
    plt.axvline(mean_position_error, color='blue', linestyle="--", label=f'Mean Position Error = {mean_position_error:.2f} mm')
    plt.axhline(mean_angle_error, color='green', linestyle="--", label=f'Mean Angle Error = {mean_angle_error:.2f}°')
    plt.xlabel("Position Error [mm]")
    plt.ylabel("Orientation Error [°]")
    plt.title("Error Distribution")
    legend = plt.legend(loc='upper right', fontsize='small', frameon=True)
    legend.get_frame().set_facecolor('white')
    plt.savefig(os.path.join(figures_dir, f'error_distribution.{export_format}'), dpi=300, bbox_inches='tight')

    plt.close('all')

def main():
    package_name = "localization_benchmarking" 
    config_path = os.path.join(get_package_share_directory(package_name), "config", "experiment_params.yaml")

    try:
        with open(config_path, 'r') as file:
            experiment_runner_params = yaml.safe_load(file)
    except Exception as e:
        logger.error(f"Error loading YAML file: {e}")
        return
    
    paths = experiment_runner_params["experiment"]["paths"]
    rosbags_dir = os.path.expanduser(paths["rosbags_dir"])
    maps_dir = os.path.join(get_package_share_directory(package_name), "maps")


    for experiment_name, experiment_params in experiment_runner_params["experiment"]["experiments"].items():
        
        tune_mode = experiment_params["tune"]
        evaluation_mode = experiment_params["evaluation"]
        evaluation_runs = experiment_params["evaluation_runs"]
        map_file_dir = os.path.join(maps_dir, f'{experiment_params["map"]}.yaml')
        results_dir = os.path.join(os.path.expanduser(paths["results_dir"]), experiment_name)

        if tune_mode:
            if not os.path.exists(results_dir):
                os.makedirs(results_dir)
            else:
                shutil.rmtree(results_dir)
                os.makedirs(results_dir)

            for algorithm, params in experiment_runner_params["algorithms"].items():

                algo_key = list(params.keys())[0]

                # Szukanie tylko list do optymalizacji, ale zapamiętujemy pełne ścieżki
                def extract_param_grid(param_dict, prefix=''):
                    grid = {}
                    for k, v in param_dict.items():
                        full_key = f"{prefix}.{k}" if prefix else k
                        if isinstance(v, list):
                            grid[full_key] = v
                        elif isinstance(v, dict):
                            grid.update(extract_param_grid(v, full_key))
                    return grid
    
                param_grid = extract_param_grid(params[algo_key]["ros__parameters"])
                logger.info(param_grid)

                best_mean_position_error = float('inf')
                i = 0

                for values in itertools.product(*param_grid.values()):
                    param_dict = {}
                    for key, value in zip(param_grid.keys(), values):
                        nested = build_nested_param_dict(key, value)
                        deep_update(param_dict, nested)

                    # Kopia wszystkich parametrów i aktualizacja jednym zestawem zgranych wartości
                    full_params = deepcopy(params[algo_key]["ros__parameters"])
                    deep_update(full_params, param_dict)

                    run_dir = os.path.join(results_dir, "tune", algorithm, f"run{i}")
                    os.makedirs(run_dir, exist_ok=True)
                    params_dir = os.path.join(run_dir, "params.yaml")

                    with open(params_dir, "w") as file:
                        data = {algo_key: {"ros__parameters": full_params}}

                        if algorithm == "amcl" and "map_server" in params:
                            data["map_server"] = {"ros__parameters": params["map_server"]["ros__parameters"]}

                        yaml.safe_dump(data, file)

                    # print(f"Running {algorithm}")
                    rosbag = experiment_params["tune_rosbag"]
                    rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                    logger.critical(f"### RUN experiment {i} ###")
                    output = run_experiment(algorithm, params_dir, map_file_dir, rosbag, rosbag_file_dir, run_dir)

                    print(f"OUTPUT {output} -------------")

                    if output == 0:
                        results_csv_dir = os.path.join(run_dir, "results.csv")
                        print(results_csv_dir)
                        mean_position_error, _ = calculate_pose_error(results_csv_dir)
                        print(mean_position_error)

                        if mean_position_error < best_mean_position_error:
                            best_mean_position_error = mean_position_error
                            best_run_dir = os.path.join(results_dir, "tune", algorithm, "best_run")
                            if os.path.exists(best_run_dir):
                                shutil.rmtree(best_run_dir)
                            shutil.copytree(run_dir, best_run_dir, dirs_exist_ok=True)
                            plot_results(algorithm, rosbag, best_run_dir)

                    logger.critical(f"### FINISH experiment {i} ###")
                    shutil.rmtree(run_dir)
                    i += 1
                    

        if evaluation_mode and os.path.exists(results_dir):
            
            def run_evaluation(algorithm, rosbag, eval_dir, best_params_dir, rosbag_file_dir, map_file_dir, runs):
                position_errors = []
                angle_errors = []
                best_mean_position_error = float('inf')
                worst_mean_position_error = 0
                results_summary_csv = os.path.join(eval_dir, "evaluation_results.csv")
                with open(results_summary_csv, mode='w', newline='') as f:
                    writer = csv.writer(f)
                    writer.writerow(["Run", "Mean Position Error", "Mean Angle Error"])

                
                for run in range(runs):
                    logger.critical("-----------------------------------------------------------------------------------")
                    logger.critical(f"----------Running evaluation {run+1}/{runs} for {algorithm} on {rosbag}.----------")
                    logger.critical("-----------------------------------------------------------------------------------")
                    run_dir = os.path.join(eval_dir, f"run_{run}")
                    # logger.error(f"=======RUN DIR {run_dir} ===========")
                    os.makedirs(run_dir, exist_ok=True)
                    output = run_experiment(algorithm, best_params_dir, map_file_dir, rosbag, rosbag_file_dir, run_dir)
                    
                    if output == 0:
                        results_csv_dir = os.path.join(run_dir, "results.csv")

                        if not os.path.isfile(results_csv_dir) or os.path.getsize(results_csv_dir) == 0:
                            logger.warning(f"results.csv not found or is empty in {run_dir}, skipping...")
                            continue

                        try:
                            mean_position_error, mean_angle_error = calculate_pose_error(results_csv_dir, outlier_percent=5)
                        except Exception as e:
                            logger.error(f"Failed to calculate pose error in {results_csv_dir}: {e}")
                            continue

                        position_errors.append(mean_position_error)
                        angle_errors.append(mean_angle_error)

                        with open(results_summary_csv, mode='a', newline='') as f:
                            writer = csv.writer(f)
                            writer.writerow([run + 1, f"{mean_position_error:.4f}", f"{mean_angle_error:.4f}"])

                        plot_results(algorithm, rosbag, run_dir)
                        
                        if mean_position_error < best_mean_position_error:
                            best_mean_position_error = mean_position_error
                            best_run_dir = os.path.join(eval_dir, "best_run")
                            os.makedirs(best_run_dir, exist_ok=True)
                            shutil.copytree(run_dir, best_run_dir, dirs_exist_ok=True)
                        elif mean_position_error > worst_mean_position_error:
                            worst_mean_position_error = mean_position_error
                            worst_run_dir = os.path.join(eval_dir, "worst_run")
                            os.makedirs(worst_run_dir, exist_ok=True)
                            shutil.copytree(run_dir, worst_run_dir, dirs_exist_ok=True)
                    shutil.rmtree(run_dir)
                
                avg_position_error = np.mean(position_errors)
                avg_angle_error = np.mean(angle_errors)
                with open(results_summary_csv, mode='a', newline='') as f:
                    writer = csv.writer(f)
                    writer.writerow([])
                    writer.writerow(["Average", f"{avg_position_error:.4f}", f"{avg_angle_error:.4f}"])

                return avg_position_error, avg_angle_error
            

            def update_initial_pose_in_params(params_file, initial_pose, algorithm):
               
                with open(params_file, 'r') as file:
                    params = yaml.safe_load(file)
                if algorithm == "amcl":
                    params[algorithm]['ros__parameters']['initial_pose'] = initial_pose
                elif algorithm == "mrpt":
                    try:
                        mean_params = params['/**']['ros__parameters']['initial_pose']['mean']
                        mean_params['x'] = initial_pose['x']
                        mean_params['y'] = initial_pose['y']
                        mean_params['yaw'] = initial_pose['yaw']
                    except KeyError as e:
                        logger.error(f"BŁĄD: Brakuje klucza w YAML: {e}")
                        return

                with open(params_file, 'w') as file:
                    yaml.safe_dump(params, file)

            summary_results = {}
            os.makedirs(os.path.join(results_dir, "evaluation"), exist_ok=True)
            
            for algorithm in experiment_runner_params["algorithms"]:
                summary_results[algorithm] = {}
                
                try:
                    best_params_source = os.path.join(results_dir, "tune", algorithm, "best_run", "params.yaml")
                    best_params_target = os.path.join(results_dir, "evaluation", algorithm, "params.yaml")
                    os.makedirs(os.path.dirname(best_params_target), exist_ok=True)
                    shutil.copy(best_params_source, best_params_target)

                    # # Step 1: Evaluate on evaluation_rosbags_1 normally
                    # for rosbag in experiment_params["evaluation_rosbags_1"]:
                    #     logger.critical("############################")
                    #     logger.critical("----------STAGE1------------")
                    #     logger.critical("############################")
                    #     rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                    #     eval_dir = os.path.join(results_dir, "evaluation", algorithm, rosbag)
                    #     os.makedirs(eval_dir, exist_ok=True)
                    #     summary_results[algorithm][rosbag] = run_evaluation(algorithm, rosbag,
                    #                                                          eval_dir, best_params_target, 
                    #                                                          rosbag_file_dir, map_file_dir, evaluation_runs)
                
                    # # Step 2: Evaluate on evaluation_rosbags_2
                    # for rosbag in experiment_params["evaluation_rosbags_2"]:
                    #     logger.critical("############################")
                    #     logger.critical("----------STAGE2------------")
                    #     logger.critical("############################")
                    #     rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                    #     eval_dir = os.path.join(results_dir, "evaluation", algorithm, rosbag)
                    #     os.makedirs(eval_dir, exist_ok=True)
                    #     summary_results[algorithm][rosbag] = run_evaluation(algorithm, rosbag, eval_dir, best_params_target,
                    #                                                          rosbag_file_dir, map_file_dir, evaluation_runs)

                    # Step 3: Evaluate on evaluation_rosbags_1 with different initial poses
                    for rosbag in experiment_params["evaluation_rosbags_1"]:
                        logger.critical("############################")
                        logger.critical("----------STAGE3------------")
                        logger.critical("############################")
                        rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                        
                        initial_pose_params = experiment_params["initial_pose"]
                        initial_pose_keys = initial_pose_params.keys()
                        
                        initial_pose_combinations = list(itertools.product(*[
                            value if isinstance(value, (list, tuple)) else [value]
                            for key, value in initial_pose_params.items()
                        ]))
                        
                        for idx, initial_pose_values in enumerate(initial_pose_combinations):
                            initial_pose = dict(zip(initial_pose_keys, initial_pose_values))
                            initial_pose_label = f"pose_{idx}" 
                            update_initial_pose_in_params(best_params_target, initial_pose, algorithm)
                            eval_dir = os.path.join(results_dir, "evaluation", algorithm, f"{rosbag}_{initial_pose_label}")
                            # logger.critical(f"Eval dir: {eval_dir}")
                            os.makedirs(eval_dir, exist_ok=True)
                            summary_results[algorithm][f"{rosbag}_{initial_pose_label}"] = run_evaluation(
                                algorithm, rosbag, eval_dir, best_params_target, rosbag_file_dir, map_file_dir, evaluation_runs)
                except Exception as e:
                    logger.error(f"Error during evaluation of {algorithm} on {rosbag}: {e}")
            
            summary_csv_path = os.path.join(results_dir, "evaluation", "summary.csv")
            with open(summary_csv_path, mode='w', newline='') as file:
                writer = csv.writer(file)
                header = ["Algorithm"] + list(summary_results[list(summary_results.keys())[0]].keys())
                writer.writerow(header)

                for algorithm, results in summary_results.items():
                    row = [algorithm] + [f"{results[rosbag][0]:.4f}, {results[rosbag][1]:.4f}" for rosbag in results]
                    writer.writerow(row)

            # Optional table plot
            fig, ax = plt.subplots(figsize=(12, 8))
            ax.axis('tight')
            ax.axis('off')
            table_data = [
                [algorithm] + [f"{results[rosbag][0]:.2f}, {results[rosbag][1]:.2f}" for rosbag in results]
                for algorithm, results in summary_results.items()
            ]
            table = ax.table(cellText=table_data, colLabels=header, loc='center')
            plt.savefig(os.path.join(results_dir, "evaluation", "evaluation_summary.png"), dpi=300)
            plt.close()

if __name__ == "__main__":
    main()

