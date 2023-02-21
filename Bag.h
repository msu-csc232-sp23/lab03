/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    Bag.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Useful libraries and function declarations for CSC232 assignments.
 * @version v2022.12.26
 * @date    Spring 2023
 */

#ifndef CSC232_BAG_H
#define CSC232_BAG_H

#include <vector>

template<typename Object>
class Bag {
public:
    /**
     * Gets the current number of entries in this bag.
     *
     * @return The integer number of entries currently in the bag.
     */
    virtual int getCurrentSize() const = 0;

    /**
     * Determines whether this bag is empty.
     *
     * @return True if the bag is empty, false otherwise.
     */
    virtual bool isEmpty() const = 0;

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
    virtual bool add(const Object &newEntry) = 0;

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
    virtual bool remove(const Object &anEntry) = 0;

    /**
     * Removes all entries from this bag.
     *
     * @post Bag contains no items, and the count of items is 0.
     */
    virtual void clear() = 0;

    /**
     * Counts the number of times a given entry appears in this bag.
     *
     * @param  anEntry The entry to be counted.
     *
     * @return The number of times anEntry appears in the bag.
     */
    virtual int getFrequencyOf(const Object &anEntry) const = 0;

    /**
     * Determines whether this bag contains a given entry.
     *
     * @param anEntry The entry to locate.
     *
     * @return True if this bag contains anEntry, false otherwise.
     */
    virtual bool contains(const Object &anEntry) const = 0;

    /**
     * Empties and then fills a given vector with all entries that are in
     * this bag.
     *
     * @return A vector containing copies of all entries in this bag.
     */
    virtual std::vector<Object> toVector() const = 0;

    /**
     * Destroys this bag and frees its assigned memory.
     */
    virtual ~Bag() = default;
};

#endif // CSC232_BAG_H
