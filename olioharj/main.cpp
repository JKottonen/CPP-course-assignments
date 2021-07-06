#include <iostream>
#include "Player.h"
#include "Grid.h"

using namespace std;
int charToInt(char alphabet) {
	return alphabet - 64;
}

void addShips(Player& player, int shipSizes[], int navySize) {
	int y, x;
	char temp; 
	for(int i = 0; i < navySize; i++) {
		cout << "Pelaaja " << player.playerNumber << ": anna aloituskoordinaatit laivalle, jonka pituus on " << shipSizes[i] << endl;
		cout << "A-J: ";
		cin >> temp;
		x = charToInt(temp);
		cout << "\n" << "1-10: ";
		cin >> y;
		cout << "\n" << "Suunta: n,s,w,e: ";
		cin >> temp;
		cout << endl;
		if(player.checkShipSpace(y, x, shipSizes[i], temp)){
			player.addShip(y, x, shipSizes[i], temp);
		}
		else{
			cout << "EI KÄY";
			i--;
		}

	}
}


int main() {
	int navySize = 6;
	int* shipSizes = new int[navySize] {5,5,4,3,3,2};

	Player Player1(1, navySize);
	Player Player2(2, navySize);

	Player1.Map.revealGrid();
	addShips(Player1, shipSizes, navySize);

	delete[] shipSizes;
	return 0;
}
