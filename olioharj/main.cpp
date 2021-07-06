#include <iostream>
#include "Player.h"
#include "Grid.h"

using namespace std;

void addShips(Player& player, int shipSizes[], int navySize) {
	for(int i = 0; i < navySize; i++) {
		cout << "Pelaaja " << player.playerNumber << ": anna aloituskoordinaatit laivalle, jonka pituus on " << shipSizes[i] << endl;
	}
}


int main() {
	int navySize = 6;
	int* shipSizes = new int[navySize] {5,5,4,3,3,2};

	Player Player1(1, navySize);
	Player Player2(2, navySize);

	addShips(Player1, shipSizes, navySize);

	delete[] shipSizes;
	return 0;
}
