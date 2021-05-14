#include <string>
#include <iostream>
using namespace std;

// Base class
class Ajoneuvo {
    public:
        string honkSound = "Tööttistä saatana!";
        void honk() {
            cout << honkSound << endl;
    }
};