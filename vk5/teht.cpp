// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä viittauksia

// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä osoittimia

// Toteuta funktiot joka tulostaa float-tyyppisen taulukon kaikki arvot,
// hyödynnä osoitinaritmetiikkaa

// HEADERS
#include <iostream>

using namespace std;

main() {
    int x = 2;
    int y = 5;

    int *ptrX = &x;
    int *ptrY = &y;

    cout << "pointer X: " << *ptrX << "pointer Y:" << *ptrY << endl;
    cout << "X: " << *&x << "Y: " << *&y << endl;

}