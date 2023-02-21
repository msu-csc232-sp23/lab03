/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file      ArrayBag.cpp
 * @authors   Frank M. Carrano and Tim Henry
 *            Jim Daehn <jdaehn@missouristate.edu>
 * @copyright 2016 __Pearson Education__. All rights reserved.
 */

#include <cstdlib>
#include "ArrayBag.h"

template<typename Object>
ArrayBag<Object>::ArrayBag() : itemCount{0}, maxItems{DEFAULT_BAG_SIZE} {
    /* no-op; all initializations handled in initializer list */
}

template<typename Object>
int ArrayBag<Object>::getCurrentSize() const {
    return itemCount;
}

template<typename Object>
bool ArrayBag<Object>::isEmpty() const {
    return itemCount == 0;
}

template<typename Object>
bool ArrayBag<Object>::add(const Object &newEntry) {
    bool hasRoom = (itemCount < maxItems);
    if (hasRoom) {
        items[itemCount] = newEntry;
        itemCount += 1;
    }
    return hasRoom;
}

template<typename Object>
bool ArrayBag<Object>::remove(const Object &anEntry) {
    int locatedIndex{getIndexOf(anEntry)};
    bool canRemoveObject{!isEmpty() && locatedIndex > -1};
    if (canRemoveObject) {
        itemCount -= 1;
        items[locatedIndex] = items[itemCount];
    }
    return canRemoveObject;
}

template<typename Object>
void ArrayBag<Object>::clear() {
    itemCount = 0;
}

template<typename Object>
bool ArrayBag<Object>::contains(const Object &anEntry) const {
    return getIndexOf(anEntry) > -1;
}

template<typename Object>
int ArrayBag<Object>::getFrequencyOf(const Object &anEntry) const {
    int frequency{0};
    int searchIndex{0};
    while (searchIndex < itemCount) {
        if (items[searchIndex] == anEntry) {
            frequency += 1;
        }
        searchIndex += 1;
    }
    return frequency;
}

template<typename Object>
std::vector<Object> ArrayBag<Object>::toVector() const {
    std::vector<Object> bagContents{};
    for (int i{0}; i < itemCount; i += 1) {
        bagContents.push_back(items[i]);
    }
    return bagContents;
}

template<typename Object>
int ArrayBag<Object>::getIndexOf(const Object &target) const {
    bool found{false};
    int result{-1};
    int searchIndex{0};
    // if the bag is empty, itemCount is zero
    while (!found && (searchIndex < itemCount)) {
        if (items[searchIndex] == target) {
            found = true;
            result = searchIndex;
        } else {
            searchIndex += 1;
        }
    }
    return result;
}