#ifndef GRID_H
#define GRID_H

#include "Ship.h"

using namespace std;

#define gridHeight 11
#define gridWidht 11


// Base class
class Grid {

    public:
        Grid();
        char grid[gridHeight][gridWidht];
        void printGrid();
        void revealGrid();
        char getBlock(int y, int x);

    private:
        void generateGrid();
};


#endif