// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä viittauksia

// Toteuta funktio joka vaihtaa kahden int-tyyppisen luvun arvot,
// käytä osoittimia

// Toteuta funktiot joka tulostaa float-tyyppisen taulukon kaikki arvot,
// hyödynnä osoitinaritmetiikkaa


#include <iostream>
using namespace std;

// function declaration:
void printArray(double arr[], int size);

int main () {
   // an int array with 5 elements.
   double balance[5] = {1000.5, 2.2, 3.5, 17.8, 50.2 };
   double* p = balance;

   // pass pointer to the array as an argument.
   printArray( p, 5 );
   return 0;
}

void printArray(double* p, int size) {
   for (int i = 0; i < size; ++i) {
      cout << *(p + i) << endl;
   }
}