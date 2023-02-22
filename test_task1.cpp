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
        GIVEN("the student is prepared to test task 1") {
            const char* desired_declaration_string = "size_t getStrategySize";
            const char* undesired_to_do_string = "TODO: 1.1";
            const char* filename   = "ResizingStrategy.h";
            WHEN("we look for the primitive method declaration") {
                std::ifstream input_stream{ filename, std::ios::in };
                if (!input_stream) {
                    FAIL_CHECK("Test source file could not be opened!");
                    exit( EXIT_FAILURE);
                }
                // Read the entire file into memory
                std::string file_contents;
                std::string current_line;
                while (getline(input_stream, current_line )) {
                    file_contents += current_line + '\n';
                }
                input_stream.close();
                THEN("we expect the TODO was erased") {
                    size_t pos = file_contents.find(undesired_to_do_string);
                    REQUIRE_MESSAGE((static_cast<int>(pos) < 0), "It appears you have not erased the TODO as asked in this task. Please do this before attempt to validate this task.");
                }
                AND_THEN("we expect the primitive method was declared correctly to some degree") {
                    size_t pos = file_contents.find(desired_declaration_string);
                    REQUIRE_MESSAGE((static_cast<int>(pos) > 0), "It appears you have not properly declared the primitive method. Please do this before attempt to validate this task.");
                }
            }
        }
    }
#endif
}
