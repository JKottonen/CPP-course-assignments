#include "Player.h"
#include <iostream>

Player::Player(int number, int maxPoints) {
    playerNumber = number;
    health = maxPoints;
    maxHealth = maxPoints;
}
Player::~Player() {

}
int Player::charToInt(char alphabet) {
	return alphabet - 64;
}

// Shooting function:
// Returns false if coordinates are shot already, or shot is out of bounds.
bool Player::shoot(Player& Opponent) {
    string coords;
    int x, y;

    cout << "Insert coordinates to shoot: ";
    cin >> coords;
    x = charToInt(coords[0]);
    y = (int)coords[1];

    if(x < 1 || x > 10 || y < 1 || y > 10) {
        cout << "Shot out of bounds!" << endl;
        return false;
    }
    if(Opponent.Map.getBlock(y,x) != '-') {
        cout << "Shot taken already!" << endl;
        return false;
    }
    if(Opponent.Map.getBlock(y, x) == 'O') {
        Opponent.Map.setBlock(y, x, 'X');
        return true;
    }
    if(Opponent.Map.getBlock(y, x) == '-') {
        Opponent.Map.setBlock(y, x, '?');
        return true;
    }
    return false;
}

void Player::addShips(string shipSeed) {
	int y, x;
	char temp;
    Map.revealGrid();
	for(int i = 0; i < shipSeed.length(); i++) {
		int shipLength = (int)shipSeed[i]-48;
		cout << "Pelaaja " << playerNumber << ": anna aloituskoordinaatit laivalle, jonka pituus on " << shipLength << endl;
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
		if(checkShipSpace(y, x, shipLength, temp)){
			addShip(y, x, shipLength, temp);
		}
		else{
			cout << "EI KÄY" << endl;
			i--;
		}
		
	}
}

bool Player::checkShipSpace(int y, int x, int length, char direction) {
    if(y > 10 || y < 1) {
        return false;
    }
    if(x > 10 || x < 1) {
        return false;
    }

    if(direction == 'N') {
        if((y - (length-1)) < 1) {
            return false;
        }
        for(int i = y; i > y-length; i--) {
            if(Map.getBlock(i,x) == 'O') {
                return false;
            }
        }     
    }

    if(direction == 'S') {
        if((y + (length-1)) > 10) {
            return false;
        }
        for(int i = y; i < y + length; i++) {
            if(Map.getBlock(i,x) == 'O') {
                return false;
            }
        }
    }
    
    if(direction == 'W') {
        if((x - (length-1)) < 1) {
            return false;
        }
        for(int i = x; i > x-length; i--) {
            if(Map.getBlock(y,i) == 'O') {
                return false;
            }
        }  
    }
    if(direction == 'E') {
        if((x + (length-1)) > 10) {
            return false;
        }
        for(int i = x; i < x + length; i++) {
            if(Map.getBlock(y,i) == 'O') {
                return false;
            }
        } 
    }
    return true;
}

void Player::addShip(int y, int x, int length, char direction) {
    if(direction == 'N') {
        for(int i = y; i > y-length; i--) {
            Map.grid[i][x] = 'O';
        }
    }

    if(direction == 'S') {
        for(int i = y; i < y + length; i++) {
            Map.grid[i][x] = 'O';
        }
    }

    if(direction == 'W') {
        for(int i = x; i > x-length; i--) {
            Map.grid[y][i] = 'O';
        }
    }

    if(direction == 'E') {
        for(int i = x; i < x + length; i++) {
            Map.grid[y][i] = 'O';
        }
    }
    Map.revealGrid();
}
