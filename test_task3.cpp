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
#include "ResizableArrayBag.h"
#include "DoublingStrategy.h"
#include "BumpStrategy.h"

TEST_SUITE("Task 3"
           * doctest::description("A suite of tests for Task 3")
           * doctest::skip(SKIP_TESTING_TASK_3))
{
#if !SKIP_TESTING_TASK_3

    SCENARIO("Lab 3, Task 3")
    {
        GIVEN("Some preconditions") {
            ResizableArrayBag<int> bag{2, new DoublingStrategy<int>{}};
            WHEN("I add two entries") {
                for (int i{0}; i < 2; ++i) {
                    bag.add(i);
                }
                THEN("I expect the capacity to be unchanged") {
                    REQUIRE_EQ(2, bag.getMaxItems());
                }
            }
            AND_WHEN("I add three entries") {
                for (int i{0}; i < 3; ++i) {
                    bag.add(i);
                }
                THEN("I expect the capacity to expand to 4 items") {
                    REQUIRE_EQ(4, bag.getMaxItems());
                }
            }
            AND_WHEN("I add 5 entries") {
                for (int i{0}; i < 5; ++i) {
                    bag.add(i);
                }
                THEN("I expect the capacity to expand to 8 items") {
                    REQUIRE_EQ(8, bag.getMaxItems());
                }
            }
            AND_WHEN("I add 9 entries") {
                for (int i{0}; i < 9; ++i) {
                    bag.add(i);
                }
                THEN("I expect the capacity to expand to 16 items") {
                    REQUIRE_EQ(16, bag.getMaxItems());
                }
            }
        }
    }

    SCENARIO("Lab 3, Task 3")
    {
        GIVEN("Some preconditions") {
            ResizableArrayBag<double> decimals{2, new BumpStrategy<double>{}};
            WHEN("I add two entries") {
                for (int i{0}; i < 2; ++i) {
                    decimals.add(i);
                }
                THEN("I expect the capacity to increase by one") {
                    REQUIRE_EQ(2, decimals.getMaxItems());
                }
            }
            AND_WHEN("I add three entries") {
                for (int i{0}; i < 3; ++i) {
                    decimals.add(i);
                }
                THEN("I expect the capacity to increase by one") {
                    REQUIRE_EQ(3, decimals.getMaxItems());
                }
            }
            AND_WHEN("I add five items") {
                for (int i{0}; i < 5; ++i) {
                    decimals.add(i);
                }
                THEN("I expect the capacity to increase by three") {
                    REQUIRE_EQ(5, decimals.getMaxItems());
                }
            }
            AND_WHEN("I add nine items") {
                for (int i{0}; i < 9; ++i) {
                    decimals.add(i);
                }
                THEN("I expect the capacity to increase by seven") {
                    REQUIRE_EQ(9, decimals.getMaxItems());
                }
            }
        }
    }
#endif
}