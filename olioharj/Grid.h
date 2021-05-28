#ifndef GRID_H
#define GRID_H

#include <iostream>

using namespace std;

#define gridHeight 11
#define gridWidht 11


// Base class
class Grid {

    public:
        Grid() {
        generateGrid();
        }
        char grid[gridHeight][gridWidht];
        void printGrid();
        void sayHello();

    private:
        void generateGrid();
};
    


#endif