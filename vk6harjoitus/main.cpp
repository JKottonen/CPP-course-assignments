#include "headers.h"
#include <iostream>
#include "haista.cpp"

using namespace std;


main() {
    string koo = "KOO";
    cout << koo << endl;

    Auto kaara;
    kaara.autoId = 2334;
    Auto salonen;
    salonen.autoId = 69;
    salonen.autoMerkki = "Merseedes";
    Auto kottonen;
    kottonen.autoId = 666;
    kottonen.autoMerkki = "Toijootta";
    Auto koivisto;
    koivisto.autoId = 6969;
    koivisto.autoMerkki = "Bemmi";
    printHello();
    cout << "--------------------------" << endl;
    kottonen.printThingsOut();
    salonen.printThingsOut();
}

void printHello() {
    cout << "Haista paska" << endl;
}