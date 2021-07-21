#include "Game.h"
#include "Player.h"
#include <iostream>

Game::Game() {
    maxPoints = countMaxPoints(shipSeed);
    Player1 = Player(1, maxPoints);
    Player1.addShips(shipSeed);

    Player2 = Player(2, maxPoints);
    Player2.addShips(shipSeed);
}

Game::~Game() {

}

int Game::countMaxPoints(string shipSeed) {
	int sum = 0;
	for (int i = 0; i < shipSeed.length(); i++) {
		int num = (int)shipSeed[i]-48;
		sum = sum + num;
	}
	return sum;
}
void Game::gameloop() {
    int winner;
    while(true) {
        this -> turn(Player1, Player2);
        if(Player1.points >= maxPoints) {
            winner = 1;
            break;
        }
        this -> turn(Player2, Player1);
        if(Player2.points >= maxPoints) {
            winner = 2;
            break;
        }
    }
    cout << "PLAYER " << winner << " WINS!" << endl;
    
}

void Game::turn(Player& player, Player& opponent) {
    string enter;
    system("CLS");
    std::cout << "PLAYER " << player.playerNumber << ": Press Enter." << endl;
    std::cin >> enter;
    std::cout << "PLAYER " << player.playerNumber << "'S TURN:" << endl;
    std::cout << "  OPPONENT'S MAP" << endl;
    opponent.Map.printGrid();
    std::cout << "  YOUR MAP" << endl;
    player.Map.revealGrid();
    std::cout << "Your points: " << player.points << "/" << maxPoints << endl;
    player.shoot(player, opponent);
}