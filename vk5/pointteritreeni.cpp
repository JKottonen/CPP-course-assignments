# include <iostream>

using namespace std;

// HEADERS


main() {
    int x = 10; 
    int *ptr = &x;

    cout << "PTR osoittaa: " << ptr << endl;
    cout << "PTR:n osoittaman muistipaikan sisältämä arvo: " << *ptr << endl;
}
