/**
 * CSC232 - Data Structures with C++
 * Missouri State University, Spring 2020
 *
 * @file    ResizableArrayBag.h
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 */

#ifndef CSC232_RESIZABLE_ARRAY_BAG_H
#define CSC232_RESIZABLE_ARRAY_BAG_H

#include "Bag.h"
#include "ResizingStrategy.h"
#include "DoublingStrategy.h"

template<typename Object>
class ResizableArrayBag : public Bag<Object> {
public:
    /**
     * Initializing constructor that initializes the size of the bag.
     * @param initialSize the initial capacity of this Bag
     */
    ResizableArrayBag(size_t initialSize = INITIAL_SIZE,
                      ResizingStrategy<Object> *resizingStrategy = new DoublingStrategy<Object>{});

    /**
     * Gets the current number of entries in this bag.
     *
     * @return The integer number of entries currently in the bag.
     */
    virtual int getCurrentSize() const override;

    /**
     * Determines whether this bag is empty.
     *
     * @return True if the bag is empty, false otherwise.
     */
    virtual bool isEmpty() const override;

    /**
     * Adds a new entry to this bag.
     *
     * @post   If successful, newEntry is stored in the bag and the count
     *         of items in the bag has increased by 1.
     *
     * @param  newEntry The object to be added as a new entry.
     *
     * @return True if addition was successful, false otherwise.
     */
    virtual bool add(const Object &newEntry) override;

    /**
     * Removes one occurrence of a given entry from this bag, if possible.
     *
     * @post   If successful, anEntry has been removed from the bag and the
     *         count of items in the bag has decreased by 1.
     *
     * @param  anEntry The entry to be removed.
     *
     * @return True if removal was successful, false otherwise.
     */
    virtual bool remove(const Object &anEntry) override;

    /**
     * Removes all entries from this bag.
     *
     * @post Bag contains no items, and the count of items is 0.
     */
    virtual void clear() override;

    /**
     * Counts the number of times a given entry appears in this bag.
     *
     * @param  anEntry The entry to be counted.
     *
     * @return The number of times anEntry appears in the bag.
     */
    virtual int getFrequencyOf(const Object &anEntry) const override;

    /**
     * Determines whether this bag contains a given entry.
     *
     * @param anEntry The entry to locate.
     *
     * @return True if this bag contains anEntry, false otherwise.
     */
    virtual bool contains(const Object &anEntry) const override;

    /**
     * Empties and then fills a given vector with all entries that are in
     * this bag.
     *
     * @return A vector containing copies of all entries in this bag.
     */
    virtual std::vector<Object> toVector() const override;

    /**
     * Destroys this bag and frees its assigned memory.
     */
    virtual ~ResizableArrayBag();

private:
    static const int INITIAL_SIZE{10};
    Object *items_;
    size_t itemCount_;
    size_t maxItems_;
    ResizingStrategy<Object> *resizingStrategy_;
};

#endif // CSC232_RESIZABLE_ARRAY_BAG_H
