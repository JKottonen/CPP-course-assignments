#include <iostream>
#include "Player.h"
#include "Grid.h"

using namespace std;

int main() {
	Player Player1(1);
	Player Player2(2);

	Player1.Map.grid[2][3] = 'X';
	Player1.Map.grid[2][4] = 'O';
	Player1.Map.grid[3][4] = 'O';
	Player1.Map.grid[4][4] = 'O';
	Player1.Map.grid[5][4] = 'O';
	Player1.Map.grid[1][1] = '?';

	Player2.Map.grid[2][8] = 'O';
	Player2.Map.grid[3][8] = 'O';
	Player2.Map.grid[4][8] = 'O';
	Player2.Map.grid[5][8] = 'O';
	


	Player1.Map.printGrid();
	cout << endl;
	Player1.Map.revealGrid();

	Player2.Map.printGrid();
	cout << endl;
	Player2.Map.revealGrid();

	Player1.shoot(Player2, 1, 8);

	return 0;
}