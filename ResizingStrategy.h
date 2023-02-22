/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    ResizingStrategy.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB03_RESIZING_STRATEGY_H
#define LAB03_RESIZING_STRATEGY_H

#include <cstdlib>

template <typename Object>
class ResizingStrategy {
public:
    /**
     * Modify the given array such that its new size is based upon its current size.
     * @param array
     * @param currentSize
     * @return
     * @pre currentSize > 0
     * @post the given array is resized yet still contains all of its original entries in their original locations.
     */
    virtual size_t resize(Object*& array, size_t currentSize) = 0;

    /**
     * @brief Requirements specification for task 1.
     * Template method that subclasses will implement to compute a new size based upon the current size.
     * @param currentSize the current size (as a size_t) of some component that is requesting a new size
     * @return a new size (of type size_t) based upon the prescriptions of some resizing strategy.
     * @pre currentSize > 0
     * @post return value > currentSize
     */
    // TODO: 1.1 - define a virtual function named getStrategySize that returns twice the value of its parameter currentSize; both the parameter type and return type must be of type size_t.
    virtual size_t getStrategySize(size_t currentSize) { return 2 * currentSize; }
    /**
     * Default virtual destructor.
     */
    virtual ~ResizingStrategy() = default;
};

#endif //LAB03_RESIZING_STRATEGY_H
