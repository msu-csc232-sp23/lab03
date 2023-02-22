/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file   Demo.cpp
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#include <cstdlib>
#include <iostream>
#include "ResizableArrayBag.h"
#include "DoublingStrategy.h"
#include "BumpStrategy.h"
#include "AbstractClass.h"
#include "SubClass1.h"
#include "SubClass2.h"

/**
 * Entry point of this application.
 *
 * @return EXIT_SUCCESS upon successful completion.
 */
int main(int argc, char *argv[]) {

    std::cout << "Demo of Strategy Pattern\n";
    ResizableArrayBag<int> bag{2, new DoublingStrategy<int>{}};
    ResizableArrayBag<double> decimals{2, new BumpStrategy<double>{}};

    for (int value{0}; value < 10; ++value) {
        bag.add(value);
    }

    std::cout << std::endl;

    for (int value{0}; value < 10; ++value) {
        decimals.add(1.0 * value);
    }

    std::cout << "\nDemo of Template Method\n";
    AbstractClass *abstractClass = new SubClass1{};
    abstractClass->templateMethod();
    abstractClass = new SubClass2{};
    abstractClass->templateMethod();

    return EXIT_SUCCESS;
}
