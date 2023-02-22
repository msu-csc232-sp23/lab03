/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    BumpStrategy.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#include <iostream>
#include "BumpStrategy.h"

template <typename Object>
size_t BumpStrategy<Object>::resize(Object*& array, size_t currentSize) {
    Object* holder = array;
    size_t size = currentSize + 1;
    auto tmp = new Object[size];
    for (size_t index{0}; index < currentSize; ++index) {
        tmp[index] = array[index];
    }
    array = tmp;
    delete[] holder;
    return size;
}

// TODO 2.2: Erase this line and define the inherited primitive method by returning one more than the currentSize parameter
