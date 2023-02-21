/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task1.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 1 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 1" * doctest::description("A suite of tests for Task 1") * doctest::skip(SKIP_TESTING_TASK_1))
{
#if !SKIP_TESTING_TASK_1
    SCENARIO("Lab 3, Task 1")
    {
        GIVEN("Some preconditions") {
            // look for size_t getStrategySize in ResizingStrategy.h
            WHEN("some stimulus occurs") {

                THEN("validate some expected or required behavior") {
                    REQUIRE(true);
                }
            }
        }
    }
#endif
}
