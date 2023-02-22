/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    DoublingStrategy.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#include <iostream>
#include "DoublingStrategy.h"

template <typename Object>
size_t DoublingStrategy<Object>::resize(Object*& array, size_t currentSize) {
    Object* holder = array;
    size_t size = 2 * currentSize;
    auto tmp = new Object[size];
    for (size_t index{0}; index < currentSize; ++index) {
        tmp[index] = array[index];
    }
    array = tmp;
    delete[] holder;
    return size;
}

// TODO 2.4: Erase this line and define the inherited primitive method by returning twice the currentSize parameter
