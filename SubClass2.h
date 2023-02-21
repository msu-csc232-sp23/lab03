/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file   SubClass2.h
 * @author Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_SUBCLASS2_H
#define LAB07_SUBCLASS2_H

#include <iostream>
#include "AbstractClass.h"

class SubClass2 : public AbstractClass {
private:
    void primitiveMethod() override {
        std::cout << "Subclass 2 implementation of primitiveMethod()\n";
    }
};


#endif //LAB07_SUBCLASS2_H
