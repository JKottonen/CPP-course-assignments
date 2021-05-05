
# include <iostream>

using namespace std;

main() {
    char *array[5] = { "lehme" , "kiisu", "koiro", "aasi", "hobune" };
    cout << sizeof(char*) << endl;
    cout << array[6] << endl;
    cout << sizeof(array) << endl;for( int i = 0; i < sizeof(array); i++) {
    cout << array[i] << endl;
    }

    for( int i = 0; i < sizeof(array); i++) {
        cout << i << endl;
    }

    int array2[10] = { 12, 11, 10, 9, 8, 7, 6, 5, 4, 3 };

    for( int i = 0; i < sizeof(array2); i++) {
        cout << array2[i] << endl;
    }

}