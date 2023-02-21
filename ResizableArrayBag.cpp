/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    ResizableArrayBag.cpp
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#include <iostream>
#include "ResizableArrayBag.h"

template<typename Object>
ResizableArrayBag<Object>::ResizableArrayBag(size_t initialSize, ResizingStrategy<Object> *resizingStrategy)
        : items_{new Object[initialSize]}, itemCount_{0}, maxItems_{initialSize}, resizingStrategy_{resizingStrategy} {

}

template<typename Object>
ResizableArrayBag<Object>::~ResizableArrayBag() {
    delete[] items_;
    items_ = nullptr;
    delete resizingStrategy_;
    resizingStrategy_ = nullptr;
}

template<typename Object>
int ResizableArrayBag<Object>::getCurrentSize() const {
    return itemCount_;
}

template<typename Object>
bool ResizableArrayBag<Object>::isEmpty() const {
    return itemCount_ == 0;
}

template<typename Object>
bool ResizableArrayBag<Object>::add(const Object &newEntry) {
    bool hasRoom = (itemCount_ < maxItems_);
    if (!hasRoom) {
        maxItems_ = resizingStrategy_->resize(items_, itemCount_);
    }
    items_[itemCount_] = newEntry;
    itemCount_ += 1;
    std::cout << "Added entry; max items is currently " << maxItems_ << std::endl;
    return true;
}

template<typename Object>
bool ResizableArrayBag<Object>::remove(const Object &anEntry) {
    return false;
}

template<typename Object>
void ResizableArrayBag<Object>::clear() {
    itemCount_ = 0;
}

template<typename Object>
int ResizableArrayBag<Object>::getFrequencyOf(const Object &anEntry) const {
    return 0;
}

template<typename Object>
bool ResizableArrayBag<Object>::contains(const Object &anEntry) const {
    return false;
}

template<typename Object>
std::vector<Object> ResizableArrayBag<Object>::toVector() const {
    return std::vector<Object>();
}

template<typename Object>
size_t ResizableArrayBag<Object>::getMaxItems() const {
    return maxItems_;
}
