#include "Grid.h"
#include <string>
#include <iostream>

//char grid[gridHeight][gridWidht];

Grid::Grid() {
    generateGrid();
}

char Grid::getBlock(int y, int x) {
    return grid[y][x];
}

void Grid::printGrid() {
    for(int y = 0; y < gridHeight; y++) {
        for(int x = 0; x < gridWidht; x++) {
            if(y == 0 || x == 0) {
                cout << grid[y][x] << ' ';
            }
            if(grid[y][x] == 'X' || grid[y][x] == '-' || grid[y][x] == '?') {
                cout << grid[y][x] << ' ';
            }
            if(grid[y][x] == 'O') {
                cout << '-' << ' ';
            }
			if(x == gridWidht - 1) {
				cout << endl;
			}
        }
    }
}


void Grid::revealGrid() {
    
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