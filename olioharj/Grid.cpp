#include "Grid.h"
#include <string>

//char grid[gridHeight][gridWidht];


void Grid::printGrid() {
    for(int y = 0; y < gridHeight; y++) {
        for(int x = 0; x < gridWidht; x++) {
            cout << grid[y][x] << " ";
			if(x == gridWidht - 1) {
				cout << endl;
			}
        }
    }
}

void Grid::generateGrid() {
    string num = " 1234567890";
    string alphab = " ABCDEFGHIJ";
    for(int y = 0; y < gridHeight; y++) {
        for(int x = 0; x < gridWidht; x++) {
            if(y == 0) {
                grid[y][x] = alphab[x];
            }
            else if(x == 0) {
                grid[y][x] = num[y];
            }
            else {
                grid[y][x] = '-';
            }
        }
    }
}