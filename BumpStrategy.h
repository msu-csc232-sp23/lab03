/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    BumpStrategy.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef LAB07_BUMPSTRATEGY_H
#define LAB07_BUMPSTRATEGY_H

#include "ResizingStrategy.h"

template <typename Object>
class BumpStrategy : public ResizingStrategy<Object> {
public:
    BumpStrategy() = default;
    size_t resize(Object*& array, const size_t currentSize) override;
    virtual ~BumpStrategy() = default;
};

#endif //LAB07_BUMPSTRATEGY_H
