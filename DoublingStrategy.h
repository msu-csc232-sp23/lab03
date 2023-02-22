/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    DoublingStrategy.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB03_DOUBLING_STRATEGY_H
#define LAB03_DOUBLING_STRATEGY_H

#include "ResizingStrategy.h"

template <typename Object>
class DoublingStrategy : public ResizingStrategy<Object> {
public:
    DoublingStrategy() = default;
    size_t resize(Object*& array, size_t currentSize) override;
    // TODO: 2.3: Erase this line and declare the inherited primitive method as an override
    virtual ~DoublingStrategy() = default;
};

#endif // LAB03_DOUBLING_STRATEGY_H
