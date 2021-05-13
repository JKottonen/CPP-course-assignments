// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä viittauksia

// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä osoittimia

// Toteuta funktiot joka tulostaa float-tyyppisen taulukon kaikki arvot,
// hyödynnä osoitinaritmetiikkaa

#include <iostream>

using namespace std;

// HEADERS
int changeInts(int x, int y);
void printArray(float array[5]);



main() {
    int x = 2;
    int y = 5;
    #define arrlength = 5
    int array[5] = {};
    

    int *ptrX = &x;
    int *ptrY = &y;

    cout << "pointer X: " << *ptrX << endl;
    cout << "pointer Y: " << *ptrY << endl;
    cout << "X: " << *&x << endl;
    cout << "Y: " << *&y << endl;
    cout << x << endl;
    cout << y << endl;

}

void printArray( float *ptrArray) {

}