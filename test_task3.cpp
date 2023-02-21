/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    test_task3.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Test suite to validate task 3 of this assignment.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "csc232.h"

TEST_SUITE("Task 3"
           * doctest::description("A suite of tests for Task 3")
           * doctest::skip(SKIP_TESTING_TASK_3))
{
#if !SKIP_TESTING_TASK_3
    SCENARIO("Lab 3, Task 3")
    {
        GIVEN("Some preconditions") {

            WHEN("some stimulus occurs") {

                THEN("validate some expected or required behavior") {
                    REQUIRE(true);
                }
            }
        }
    }
#endif
}
