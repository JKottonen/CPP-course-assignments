#include "headers.h"
#include <iostream>
#include "auto.cpp"

using namespace std;


main() {
    Auto kottonen(69, "Laada", 28);
    Auto salonen(6969, "Merse", 31);
    cout << "--------------------------" << endl;
    kottonen.printThingsOut();
    kottonen.setHinta(4000);
    kottonen.printThingsOut();

    kottonen.honk();
    salonen.honk();

    kottonen.honkSound = "Tööttistä töö juu vaan sinnekki";
    kottonen.honk();
}

void printHello() {
    cout << "Haista paska" << endl;
}