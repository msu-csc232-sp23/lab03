/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    csc232.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Function implementations as needed for CSC232 assignments and demos.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#include "csc232.h"

/* Begin student work */

// TODO: Task 1.2 - Implement the power1 function below



// TODO: Task 2.2 - Implement the power2 function below



// TODO: Task 3.2 - Implement the power3 function below



/* End student work -- DO NOT ADD OR MODIFY ANYTHING BELOW THIS COMMENT */

int factorial(int number) {
    return number > 1 ? factorial(number - 1) * number : 1;
}

bool read_data(const std::string &input_file) {
    // Open the file for reading
    std::ifstream data_file{input_file, std::ios::in};

    if (!data_file) {
        std::cout << "Could not open \"" << input_file << "\"" << std::endl;
        return false;
    } else {
        std::cout << "Successfully opened \"" << input_file << "\"";

        std::cout << "... will now close this file" << std::endl;
        if (data_file.is_open()) {
            data_file.close();
        }
    }
    return true;
}