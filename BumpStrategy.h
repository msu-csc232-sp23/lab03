/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    BumpStrategy.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB03_BUMP_STRATEGY_H
#define LAB03_BUMP_STRATEGY_H

#include "ResizingStrategy.h"

template <typename Object>
class BumpStrategy : public ResizingStrategy<Object> {
public:
    BumpStrategy() = default;
    size_t resize(Object*& array, size_t currentSize) override;
    // TODO: 2.1: Erase this line and declare the inherited primitive method as an override
    virtual ~BumpStrategy() = default;
};

#endif // LAB03_BUMP_STRATEGY_H
