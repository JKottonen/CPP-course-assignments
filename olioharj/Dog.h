#include "Animal.h"

#ifndef DOG_H
#define DOG_H

#include <iostream>

using namespace std;
// Derived class
class Dog : public Animal {
  public:
    void animalSound();
};

#endif