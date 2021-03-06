// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä viittauksia

// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä osoittimia

// Toteuta funktiot joka tulostaa float-tyyppisen taulukon kaikki arvot,
// hyödynnä osoitinaritmetiikkaa


#include <iostream>
using namespace std;

// function declaration:
void changeIntsWithPointers(int* pointerX, int* pointerY);
void changeIntsWithRefs(int &x, int &y);
void printArray(double arr[], int size);


int main() {
   // ints x and y.
   int x, y;
   x = 2;
   y = 5;

   int* pointerX = &x;
   int* pointerY = &y;

   cout << "X: " << &x << endl;
   cout << "Y: " << &y << endl;

   cout << "X: " << *pointerX << endl;
   cout << "Y: " << *pointerY << endl;

   changeIntsWithPointers(pointerX, pointerY);

   cout << "X: " << &x << endl;
   cout << "Y: " << &y << endl;


   cout << "X: " << *pointerX << endl;
   cout << "Y: " << *pointerY << endl;

   changeIntsWithRefs(x , y);

   cout << "X: " << &x << endl;
   cout << "Y: " << &y << endl;


   cout << "X: " << *pointerX << endl;
   cout << "Y: " << *pointerY << endl;


   // an int array with 5 elements.
   double balance[5] = {1000.5, 2.2, 3.5, 17.8, 50.2 };
   double* p = balance;

   // pass pointer to the array as an argument.
   printArray(p, 5);
   return 0;
}
void changeIntsWithPointers(int* pointerX, int* pointerY) {
   int temp;
   temp = *pointerY;
   *pointerY = *pointerX;
   *pointerX = temp;
}
void changeIntsWithRefs(int& x, int& y) {
   int temp = x;
   x = y;
   y = temp;
}

void printArray(double* p, int size) {
   for (int i = 0; i < size; ++i) {
      cout << *(p + i) << endl;
   }
}