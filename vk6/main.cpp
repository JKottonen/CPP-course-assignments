#include <iostream>

#include "auto.h"

using namespace std;

int main()
{
    Auto::kuvaile();

    Auto a1 = Auto();
    Auto a2 = Auto(1202);

    a1.setNopeus(10);
    a2.setNopeus(20);

    cout << "Auto1 nopeus:" << a1.getNopeus() << " tunniste:" << a1.getTunniste() << endl;
    cout << "Auto2 nopeus:" << a2.getNopeus() << " tunniste:" << a2.getTunniste() << endl;

    cout << "Tehdyt autot:" << Auto::tehdytAutot << endl;
    return 0;
}