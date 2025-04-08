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

# Setup logger
logger = logging.getLogger('experiment_logger')
logger.setLevel(logging.CRITICAL) 
console_handler = logging.StreamHandler()
formatter = logging.Formatter('%(asctime)s - %(levelname)s - %(message)s')
console_handler.setFormatter(formatter)
logger.addHandler(console_handler)

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
        time.sleep(4)  # Wait for initialization

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
        logger.info("Bag playback finished. Stopping experiment...")
        launch_process.send_signal(signal.SIGINT)
        launch_process.wait()

        # Ensure threads finish
        thread1.join()
        thread2.join()

        # Return 0 if both processes were successful
        if launch_process.returncode == 0 and bag_process.returncode == 0:
            return 0  
        else:
            logger.error(f"Error: launch process returned {launch_process.returncode}, bag process returned {bag_process.returncode}")
            return 1  

    except Exception as e:
        logger.exception(f"Unexpected error: {e}")
        return 1

def calculate_ade(predicted: np.ndarray, ground_truth: np.ndarray) -> tuple:
    """Calculates position and orientation errors."""
    position_errors = np.linalg.norm(predicted[:, :2] - ground_truth[:, :2], axis=1)
    angle_errors = np.degrees(np.abs(np.arctan2(np.sin(predicted[:, 2] - ground_truth[:, 2]),
                                                np.cos(predicted[:, 2] - ground_truth[:, 2]))))
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
    
    position_errors, angle_errors = calculate_ade(predicted, ground_truth)
    
    # Sort errors and discard outlier_percent% of extreme values
    def discard_outliers(errors, percent):
        n = len(errors)
        k = int(n * percent / 100)
        return np.sort(errors)[k:n-k] if n > 2*k else errors  # Ensure at least some data remains
    
    filtered_position_errors = discard_outliers(position_errors, outlier_percent)
    filtered_angle_errors = discard_outliers(angle_errors, outlier_percent)

    mean_position_error = np.mean(filtered_position_errors)
    mean_angle_error = np.mean(filtered_angle_errors)

    # Save updated results
    with open(results_csv_dir, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow([
            "time_stamp[s]",
            "x_true_pose[mm]", "y_true_pose[mm]", "theta_true[rad]",  
            "x_pose[mm]", "y_pose[mm]", "theta[rad]", 
            "p_err[mm]", "a_err[mm]"
        ])
        for ts, gt, pred, p_err, a_err in zip(time_stamps, ground_truth, predicted, position_errors, angle_errors):
            writer.writerow([ts, gt[0], gt[1], gt[2], pred[0], pred[1], pred[2], p_err, a_err])

    return mean_position_error, mean_angle_error

def plot_results(algorithm, rosbag_filename, results_dir):
    results_csv_dir = os.path.join(results_dir, "results.csv")
    figures_dir = os.path.join(results_dir, "figures")
    os.makedirs(figures_dir, exist_ok=True)
    data = np.loadtxt(results_csv_dir, delimiter=',', skiprows=1)
    time_stamps = data[:,0]
    ground_truth = data[:, 1:4]  
    predicted = data[:, 4:7] 
    position_errors = data[:, 7] 
    angle_errors = data[:, 8] 

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
                param_grid = {k: v for k, v in params[list(params.keys())[0]]["ros__parameters"].items() if isinstance(v, list)}
                best_mean_position_error = float('inf')
                i = 0

                for values in itertools.product(*param_grid.values()):
                    param_dict = dict(zip(param_grid.keys(), values))

                    # Pobranie nazwy podklucza (np. "amcl" dla algorytmu "amcl")
                    algo_key = list(params.keys())[0]

                    # Łączenie pełnych parametrów z nowymi wartościami do optymalizacji
                    full_params = params[algo_key]["ros__parameters"].copy()
                    full_params.update(param_dict)

                    run_dir = os.path.join(results_dir, "tune", algorithm, f"run{i}")
                    os.makedirs(run_dir, exist_ok=True)
                    params_dir = os.path.join(run_dir, "params.yaml")

                    with open(params_dir, "w") as file:
                        data = {algo_key: {"ros__parameters": full_params}}

                        # Dodatkowo dodaj map_server, jeśli istnieje w konfiguracji
                        if algorithm == "amcl" and "map_server" in params:
                            data["map_server"] = {"ros__parameters": params["map_server"]["ros__parameters"]}

                        yaml.safe_dump(data,file)

                    print(f"Running {algorithm}")
                    rosbag = experiment_params["tune_rosbag"]
                    rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                    logger.info(f"### RUN experiment {i} ###")
                    output = run_experiment(algorithm, params_dir, map_file_dir, rosbag, rosbag_file_dir, run_dir)

                    if output == 0:
                        results_csv_dir = os.path.join(run_dir, "results.csv")
                        mean_position_error, _ = calculate_pose_error(results_csv_dir)
                        plot_results(algorithm, rosbag, run_dir)

                        if mean_position_error < best_mean_position_error:
                            best_mean_position_error = mean_position_error
                            best_run_dir = os.path.join(results_dir, "tune", algorithm, "best_run")
                            os.makedirs(best_run_dir, exist_ok=True)
                            shutil.copytree(run_dir, best_run_dir, dirs_exist_ok=True)

                    i += 1

        if evaluation_mode and os.path.exists(results_dir):
            
            def run_evaluation(algorithm, rosbag, eval_dir, best_params_dir, rosbag_file_dir, map_file_dir, runs, convergence_threshold=None):
                position_errors = []
                angle_errors = []
                convergence_times = []
                best_mean_position_error = float('inf')
                
                for run in range(runs):
                    logger.info(f"Running evaluation {run+1}/{runs} for {algorithm} on {rosbag}.")
                    run_dir = os.path.join(eval_dir, f"run_{run}")
                    os.makedirs(run_dir, exist_ok=True)
                    print(f"Running {algorithm}")
                    output = run_experiment(algorithm, best_params_dir, map_file_dir, rosbag, rosbag_file_dir, run_dir)
                    
                    if output == 0:
                        results_csv_dir = os.path.join(run_dir, "results.csv")
                        mean_position_error, mean_angle_error = calculate_pose_error(results_csv_dir, outlier_percent=5)
                        position_errors.append(mean_position_error)
                        angle_errors.append(mean_angle_error)
                        plot_results(algorithm, rosbag, run_dir)
                        
                        if convergence_threshold:
                            # convergence_time = calculate_convergence_time(results_csv_dir, convergence_threshold)
                            # convergence_times.append(convergence_time)
                            print("")
                        
                        if mean_position_error < best_mean_position_error:
                            best_mean_position_error = mean_position_error
                            best_run_dir = os.path.join(eval_dir, "best_run")
                            os.makedirs(best_run_dir, exist_ok=True)
                            shutil.copytree(run_dir, best_run_dir, dirs_exist_ok=True)
                
                avg_position_error = np.mean(position_errors)
                avg_angle_error = np.mean(angle_errors)
                avg_convergence_time = np.mean(convergence_times) if convergence_times else None
                
                return avg_position_error, avg_angle_error, avg_convergence_time
            

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
                        print(f"BŁĄD: Brakuje klucza w YAML: {e}")
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

                    # Step 1: Evaluate on evaluation_rosbags_1 normally
                    for rosbag in experiment_params["evaluation_rosbags_1"]:
                        rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                        eval_dir = os.path.join(results_dir, "evaluation", algorithm, rosbag)
                        os.makedirs(eval_dir, exist_ok=True)
                        summary_results[algorithm][rosbag] = run_evaluation(algorithm, rosbag,
                                                                             eval_dir, best_params_target, 
                                                                             rosbag_file_dir, map_file_dir, evaluation_runs)
                
                    # Step 2: Evaluate on evaluation_rosbags_2
                    for rosbag in experiment_params["evaluation_rosbags_2"]:
                        rosbag_file_dir = os.path.join(rosbags_dir, rosbag)
                        eval_dir = os.path.join(results_dir, "evaluation", algorithm, rosbag)
                        os.makedirs(eval_dir, exist_ok=True)
                        summary_results[algorithm][rosbag] = run_evaluation(algorithm, rosbag, eval_dir, best_params_target,
                                                                             rosbag_file_dir, map_file_dir, evaluation_runs)

                    # Step 3: Evaluate on evaluation_rosbags_1 with different initial poses
                    for rosbag in experiment_params["evaluation_rosbags_1"]:
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
                            logger.critical(f"Eval dir: {eval_dir}")
                            os.makedirs(eval_dir, exist_ok=True)
                            summary_results[algorithm][f"{rosbag}_{initial_pose_label}"] = run_evaluation(
                                algorithm, rosbag, eval_dir, best_params_target, rosbag_file_dir, map_file_dir, 1, True
                            )
                except Exception as e:
                    logger.error(f"Error during evaluation of {algorithm} on {rosbag}: {e}")
            
            summary_csv_path = os.path.join(results_dir, "evaluation", "summary.csv")
            with open(summary_csv_path, mode='w', newline='') as file:
                writer = csv.writer(file)
                header = ["Algorithm"] + list(summary_results[list(summary_results.keys())[0]].keys())
                writer.writerow(header)
                
                for algorithm, results in summary_results.items():
                    row = [algorithm] + [f"{results[rosbag][0]:.2f}, {results[rosbag][1]:.2f}, {results[rosbag][2]:.2f}" if results[rosbag][2] else f"{results[rosbag][0]:.2f}, {results[rosbag][1]:.2f}" for rosbag in results]
                    writer.writerow(row)
            
            fig, ax = plt.subplots(figsize=(12, 8))
            ax.axis('tight')
            ax.axis('off')
            table_data = [[algorithm] + [f"{results[rosbag][0]:.2f}, {results[rosbag][1]:.2f}, {results[rosbag][2]:.2f}" if results[rosbag][2] else f"{results[rosbag][0]:.2f}, {results[rosbag][1]:.2f}" for rosbag in results] for algorithm, results in summary_results.items()]
            table = ax.table(cellText=table_data, colLabels=header, loc='center')
            
            plt.savefig(os.path.join(results_dir, "evaluation", "evaluation_summary.png"), dpi=300)
            plt.close()

if __name__ == "__main__":
    main()

