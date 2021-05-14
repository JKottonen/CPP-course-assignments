#include "headers.h"
#include <iostream>
#include "haista.cpp"

using namespace std;


main() {
    Auto kottonen(69, "Laada", 28);
    Auto salonen(6969, "Merse", 31);
    cout << "--------------------------" << endl;
    kottonen.printThingsOut();
    salonen.printThingsOut();
}

void printHello() {
    cout << "Haista paska" << endl;
}