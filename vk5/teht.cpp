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
void printPointer(int pointerX, int pointerY);

main() {
    int x = 2;
    int y = 5;
    #define arrlength = 5
    float array[5] = { 1.3, 2.5, 5.5, 1.5, 0.5 };
    

    int *ptrX = &x;
    int *ptrY = &y;
    float *ptrArray = &array[5];

    cout << "pointer X: " << *ptrX << endl;
    cout << "pointer Y: " << *ptrY << endl;
    cout << "X: " << *&x << endl;
    cout << "Y: " << *&y << endl;
    cout << x << endl;
    cout << y << endl;

    printPointer(*ptrX, *ptrY);
    printArray(&array);

}

void printArray(float array[]) {
    for (int i = 0; i < 5; i ++) {
        cout << array[i] << endl;
    }
}

void printPointer( int pointerX , int pointerY) {
    cout << pointerX << endl;
    cout << pointerY << endl;

    int temp = 0;
    temp = pointerX;
    pointerX = pointerY;
    pointerY = temp;

    cout << pointerX << endl;
    cout << pointerY << endl;
}