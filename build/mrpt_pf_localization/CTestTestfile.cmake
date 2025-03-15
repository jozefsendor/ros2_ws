# CMake generated Testfile for 
# Source directory: /home/jozef/ros2_ws/src/mrpt_navigation/mrpt_pf_localization
# Build directory: /home/jozef/ros2_ws/build/mrpt_pf_localization
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(mrpt_pf_localization-test "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/jozef/ros2_ws/build/mrpt_pf_localization/test_results/mrpt_pf_localization/mrpt_pf_localization-test.gtest.xml" "--package-name" "mrpt_pf_localization" "--output-file" "/home/jozef/ros2_ws/build/mrpt_pf_localization/ament_cmake_gtest/mrpt_pf_localization-test.txt" "--command" "/home/jozef/ros2_ws/build/mrpt_pf_localization/bin/mrpt_pf_localization-test" "--gtest_output=xml:/home/jozef/ros2_ws/build/mrpt_pf_localization/test_results/mrpt_pf_localization/mrpt_pf_localization-test.gtest.xml")
set_tests_properties(mrpt_pf_localization-test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/jozef/ros2_ws/build/mrpt_pf_localization/bin/mrpt_pf_localization-test" TIMEOUT "60" WORKING_DIRECTORY "/home/jozef/ros2_ws/build/mrpt_pf_localization" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/jozef/ros2_ws/src/mrpt_navigation/mrpt_pf_localization/CMakeLists.txt;170;ament_add_gtest;/home/jozef/ros2_ws/src/mrpt_navigation/mrpt_pf_localization/CMakeLists.txt;0;")
subdirs("gtest")
