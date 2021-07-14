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

int charToInt(char alphabet) {
	return alphabet - 64;
}

void addShips(Player& player, string shipSeed) {
	int y, x;
	char temp; 
	for(int i = 0; i < shipSeed.length(); i++) {
		int shipLength = (int)shipSeed[i]-48;
		cout << "Pelaaja " << player.playerNumber << ": anna aloituskoordinaatit laivalle, jonka pituus on " << shipLength << endl;
		cout << "A-J: ";
		cin >> temp;
		temp = toupper(temp);
		x = charToInt(temp);
		cout << "\n" << "1-10: ";
		cin >> y;
		cout << "\n" << "Suunta: N,S,W,E: ";
		cin >> temp;
		temp = toupper(temp);
		cout << endl;
		if(player.checkShipSpace(y, x, shipLength, temp)){
			player.addShip(y, x, shipLength, temp);
		}
		else{
			cout << "EI KÄY" << endl;
			i--;
		}
		
	}
}


int main() {
	string shipSeed = "554332";
	int maxPoints = countMaxPoints(shipSeed);

	Player Player1(1, maxPoints);
	Player Player2(2, maxPoints);

	Player1.Map.revealGrid();
	addShips(Player1, shipSeed);

	return 0;
}
