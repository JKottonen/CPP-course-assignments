#include "Animal.h"

#ifndef PIG_H
#define PIG_H

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

#endif