#include <iostream>
#include "Grid.h"
#include "Grid.cpp"

using namespace std;

char grid[gridHeight][gridWidht];

void createGrid();
void printGrid();

int main() {
	Grid player1Map;
	player1Map.printGrid();
	player1Map.grid[1][1] = 'F';

	return 0;
}