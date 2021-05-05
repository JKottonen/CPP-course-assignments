// Toteuta funktio joka tulostaa kaikki luvut väliltä a - b jotka annetaan parametreina

// Toteuta funktio joka laskee lukujen summan annetulla välillä a - b

// Toteuta funktio joka laskee kolmion pinta-alan kun sille annetaan kanta ja korkeus.

// Toteuta funktio joka laskee ympyrän pinta-alan kun sille annetaan säde

#include <iostream>

using namespace std;

// DECLARING OF FUNCTIONS
string userIn(string question);
void printAllAtoB(int A, int B);
int countAllAtoB(int A, int B);
int areaOfTriangle(int base, int height);
int areaOfCircle(int r);

// MAIN
main() {
    int A = std::stoi(userIn("Insert value A"));
    int B = std::stoi(userIn("Insert value B"));

    cout << "Select a function:" << endl;
    cout << "1 - print all numbers between A and B" << endl;
    cout << "2 - count the sum of numbers between A and B" << endl;
    cout << "3 - calculate the area of a triangle" << endl;
    cout << "4 - calculate the area of a circle" << endl;

    int select = 0;
    while(select < 1 || select > 4) {
        select = std::stoi(userIn("Select a function: "));
    }
    
    switch(select) {
        case 1:
            printAllAtoB(A,B);
            break;
        case 2:
            cout << "the sum of numbers between " << A << " " << B << " " << countAllAtoB(A,B);
            break;
        case 3:
            cout << areaOfTriangle(A,B);
            break;
        case 4:
            cout << areaOfCircle(A);
            break;
    }
    
}

void printAllAtoB(int A, int B) {
    for (int i = A; i <= B; i++) {
        cout << i << endl;
    }
}

int countAllAtoB(int A, int B) {
    int number;
    for (int i = A; i <= B; i++) {
        number + i;
        cout << number << endl;
    }
    return number;
}

int areaOfTriangle(int base, int height) {
    float area = (base * height) / 2;
    return area;
}

int areaOfCircle(int r) {
    float pi = 3.14159;
    float area = (pi * r) * (pi * r);
    return area;
}


string userIn(string question) {
    string line;
    cout << question;
    cin >> line;
    return line;
}