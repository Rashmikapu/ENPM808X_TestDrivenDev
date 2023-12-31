/**
 * @file test.cpp
 * @author Rashmi Kapu (rashmik@umd.edu), Neha Madhekar (nehanm97@umd.edu)
 * @brief Unit tests for PID controller implementation : compute() function
 * @version 0.1
 * @date 2023-10-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <gtest/gtest.h>

#include "../include/pid.hpp"

// TEST(dummy_test, dummy) {
//   EXPECT_EQ(1, 1);
// }

PID_controller pid_test(25.0);
PID_controller pid_test1(100.0);

TEST(compute, this_should_pass) { EXPECT_NEAR(pid_test.compute(), 25, 0.02); }

TEST(compute, this_should_pass_too) { ASSERT_GT(pid_test1.compute(), 25); }
