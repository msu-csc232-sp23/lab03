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
size_t DoublingStrategy<Object>::resize(Object*& array, const size_t currentSize) {
    Object* holder = array;
    size_t size{2 * currentSize};
    Object* tmp = new Object[size];
    for (size_t index{0}; index < currentSize; ++index) {
        tmp[index] = array[index];
    }
    array = tmp;
    delete[] holder;
    return size;
}
