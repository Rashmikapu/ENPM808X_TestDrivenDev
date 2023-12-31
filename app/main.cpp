/**
 * @file main.cpp
 * @author Rashmi Kapu (rashmik@umd.edu), Neha Madhekar (nehanm97@umd.edu)
 * @brief Main function to set expected velocity and call pid controller class
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include "../include/pid.hpp"

int main() {
  // dummy();
  // my_function1(30);
  // my_function2(30.3);
  double result;
  PID_controller my_pid_controller(25.0);
  result = my_pid_controller.compute();
  std::cout << result << std::endl;
  return 0;
}
