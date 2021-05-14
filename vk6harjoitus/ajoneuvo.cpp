#ifndef AJONEUVO_H
#define AJONEUVO_H

#include "irtaimisto.cpp"
#include <string>
#include <iostream>
using namespace std;

// Base class
class Ajoneuvo: public Irtaimisto {
    public:
        string honkSound = "Tööttistä saatana!";
        string honk() {
            //cout << honkSound << endl;
            return honkSound;
    }
};

#endif // AJONEUVO_H