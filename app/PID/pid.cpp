/**
 * @file pid.cpp
 * @author Rashmi Kapu (rashmik@umd.edu), Neha Madhekar (nehanm97@umd.edu)
 * @brief To initialise the members variables of the class 'PID_Controller' and implement the member functions
 * @version 0.1
 * @date 2023-10-09
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "../../include/pid.hpp"

/**
 * @brief Computes the output of the PID controller
 * 
 * @return double 
 */
double PID_controller::compute() {
  // add implementation here
  return 0.0;
}

/**
 * @brief Construct a new pid controller::pid controller object
 * 
 */
PID_controller::PID_controller(double vel) {
  PID_controller::Kp = 0.5;
  PID_controller::Kd = 0.011;
  PID_controller::Ki = 0.01;
  PID_controller::initial_vel = 0.0;
  PID_controller::expected_vel = vel;
}

