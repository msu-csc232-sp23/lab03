/**
 * CSC232 - Data Structures
 * Missouri State University
 *
 * @file    AbstractClass.h
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   Abstract base class specification.
 * @version v2023.02.20
 * @date    Spring 2023
 */

#ifndef LAB03_ABSTRACT_CLASS_H
#define LAB03_ABSTRACT_CLASS_H

class AbstractClass {
public:
    AbstractClass() : value{0} {
        // intentionally empty
    }

    virtual ~AbstractClass() = default;

    void templateMethod() {
        value += 1; // one or more operations as part of the skeletal structure
        primitiveMethod(); // to be defined by some subclass
        value -= 1; // one or more operations as part of the skeletal structure
    }

protected: // This is effectively private to clients but public to subclasses
    virtual void primitiveMethod() = 0;

private:
    int value;
};


#endif // LAB03_ABSTRACT_CLASS_H
