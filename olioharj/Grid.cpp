#include "Grid.h"
#include <string>
#include <iostream>

Grid::Grid() {
    // Constructor calls for generateGrid-function.
    generateGrid();
}

char Grid::getBlock(int y, int x) {
    // Returns the numeric value of chosen alphabet for coordinates.
    return grid[y][x];
}

void Grid::setBlock(int y, int x, char newChar) {
    // Sets a new value for chosen coordinates.
    grid[y][x] = newChar;
}

void Grid::printGrid() {
    // Shows the Player's map for the opponent player.
    // Coordinates, hits and misses are shown, Player's ships stay hidden.
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
    // Reveals everything on the map, including hits, misses and player's ships.
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
    // Generates a blank grid with coordinates on top and the left side.
    // Fills the rest of the grid with character '-' .
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