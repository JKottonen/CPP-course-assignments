#include <string>
using namespace std;

// Base class
class Ajoneuvo {
    public:
        string honkSound = "Tööttistä saatana!";
        void honk() {
            cout << honkSound << endl;
    }
};

// Derived class
class Auto: public Ajoneuvo {
    public:
    // Public attributes:
        int autoId;
        string autoMerkki;
        int age;

    // Public functions:
        Auto(int x, string y, int z);       // Constructor declaration
        void printThingsOut();
        int getHinta();
        void setHinta(int h);

    private:
    // Private attributes:
        int hinta;
};

// Constructor
Auto::Auto(int x, string y, int z) {
            autoId = x;
            autoMerkki = y;
            age = z;
            hinta = 5000;
        }

void Auto::printThingsOut() {
    cout << "Autoid : " << autoId << endl;
    cout << "Automerkki : " << autoMerkki << endl;
    cout << "ikä: " << age << endl;
    cout << "hinta: " << hinta << endl;
}
int Auto::getHinta() {
    return hinta;
}
void Auto::setHinta(int h) {
    hinta = h;
}