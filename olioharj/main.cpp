#include <iostream>
#include "Player.h"
#include "Grid.h"

using namespace std;

int countMaxPoints(string shipSeed) {
	int sum = 0;
	for (int i = 0; i < shipSeed.length(); i++) {
		int num = (int)shipSeed[i]-48;
		sum = sum + num;
	}
	return sum;
}

int main() {
	string shipSeed = "5";
	int maxPoints = countMaxPoints(shipSeed);

	Player Player1(1, maxPoints);
	Player Player2(2, maxPoints);
	Player1.addShips(shipSeed);
	Player2.addShips(shipSeed);

//	Player1.Map.revealGrid();

	while (true) {
		Player2.Map.printGrid();
		Player1.Map.revealGrid();
		Player1.shoot(Player2);

		Player1.Map.printGrid();
		Player2.Map.revealGrid();
		Player2.shoot(Player1);
	}
	

	return 0;
}
