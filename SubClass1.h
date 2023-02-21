/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file   SubClass1.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_SUBCLASS1_H
#define LAB07_SUBCLASS1_H

#include <iostream>
#include "AbstractClass.h"

class SubClass1 : public AbstractClass {
private:
    void primitiveMethod() override {
        std::cout << "Subclass 1 implementation of primitiveMethod()\n";
    }
};


#endif //LAB07_SUBCLASS1_H
