/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file      ArrayBag.h
 * @authors   Frank M. Carrano and Tim Henry
 *            Jim Daehn <jdaehn@missouristate.edu>
 * @copyright 2016 __Pearson Education__. All rights reserved.
 */

#ifndef BAG_ARRAYBAG_H
#define BAG_ARRAYBAG_H

#include <vector>
#include "Bag.h"

template<typename Object>
class ArrayBag : public Bag<Object> {
public:
    /**
     * Default constructor.
     */
    ArrayBag();

    /**
     * Default destructor.
     */
    virtual ~ArrayBag() = default;

    /**
     * @copydoc
     */
    virtual int getCurrentSize() const override;

    /**
     * @copydoc
     */
    virtual bool isEmpty() const override;

    /**
     * @copydoc
     */
    virtual bool add(const Object &newEntry) override;

    /**
     * @copydoc
     */
    virtual bool remove(const Object &anObject) override;

    /**
     * @copydoc
     */
    virtual void clear() override;

    /**
     * @copydoc
     */
    virtual bool contains(const Object &anEntry) const override;

    /**
     * @copydoc
     */
    virtual int getFrequencyOf(const Object &anEntry) const override;

    /**
     * @copydoc
     */
    virtual std::vector<Object> toVector() const override;

private:
    // attributes
    static const int DEFAULT_BAG_SIZE = 10;
    Object items[DEFAULT_BAG_SIZE];
    int itemCount;
    int maxItems;

    // operations
    int getIndexOf(const Object &target) const;
};

#endif //BAG_ARRAYBAG_H
