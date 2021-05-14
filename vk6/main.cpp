#include <iostream>

#include "main.h"

using namespace std;

main() {
    int added = addInts(2, 5);
    cout << added << endl;
}

int addInts(int x, int y) {
    return x + y;
}