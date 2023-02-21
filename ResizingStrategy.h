/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    ResizingStrategy.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_RESIZINGSTRATEGY_H
#define LAB07_RESIZINGSTRATEGY_H

#include <cstdlib>

template <typename Object>
class ResizingStrategy {
public:
    virtual size_t resize(Object*& array, const size_t currentSize) = 0;
    virtual ~ResizingStrategy() = default;
};

#endif //LAB07_RESIZINGSTRATEGY_H
