#include "irtaimisto.cpp"
#include <string>
#include <iostream>
using namespace std;

// Base class
class Ajoneuvo: public Irtaimisto {
    public:
        string honkSound = "Tööttistä saatana!";
        void honk() {
            cout << honkSound << endl;
    }
};