#include "headers.h"
#include <iostream>
#include "auto.cpp"

using namespace std;


main() {
    Auto kottonen(69, "Laada", 28);
    Auto salonen(6969, "Merse", 31);
    Auto sara(444, "chockobo", 25);
    cout << sara.honk() << endl;
    sara.honkSound = "KYLLIKKI KYY";
    cout<< "Sara sanoo: " << sara.honk() << endl;

    cout << "--------------------------" << endl;
    kottonen.printThingsOut();
    kottonen.setHinta(4000);
    kottonen.printThingsOut();

    cout<< "Kottonen sanoo: " << kottonen.honk() << endl;
    cout<< "Salonen sanoo: " << salonen.honk() << endl;

    kottonen.honkSound = "Tööttistä töö juu vaan sinnekki";
    cout<< "Kottonen sanoo: " << kottonen.honk() << endl;
    cout << "Saran tiedot: ";
    sara.printThingsOut();
    
}

void printHello() {
    cout << "Haista paska" << endl;
}