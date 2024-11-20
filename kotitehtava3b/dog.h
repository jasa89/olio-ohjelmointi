#ifndef DOG_H
#define DOG_H

#include "animal.h"

class Dog : public Animal {
public:
    Dog();

    ~Dog();

    virtual void
    callOut() override; // call Out metodi jonka dog luokka voi ylikirjoittaa
};

#endif // DOG_H
