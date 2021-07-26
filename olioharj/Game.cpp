#include "Game.h"
#include "Player.h"
#include <iostream>

Game::Game() {
    // Counts maximum points depending on shipSeed, then
    // creates two Player-objects and makes them place their ships.

    maxPoints = countMaxPoints(shipSeed);
    Player1 = Player(1, maxPoints);
    Player1.addShips(shipSeed);

    Player2 = Player(2, maxPoints);
    Player2.addShips(shipSeed);
}

Game::~Game() {

}

int Game::countMaxPoints(string shipSeed) {
    // Function to count maximum points of the game
	int sum = 0;
	for (int i = 0; i < shipSeed.length(); i++) {
		int num = (int)shipSeed[i]-48;
		sum = sum + num;
	}
	return sum;
}
void Game::gameloop() {
    // Cycles through players' turns until one of the two gets maximum points.
    // When points are gained, loop is broken and the winner is declared.
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
    system("CLS");
    cout << "PLAYER " << winner << " WINS!" << endl;
    cout << "PLAYER 1" << endl;
    Player1.Map.revealGrid();
    cout << "PLAYER 2" << endl;
    Player2.Map.revealGrid();

    
}

void Game::turn(Player& player, Player& opponent) {
    // Prints the UI and makes the player shoot the opponent
    system("CLS");
    std::cout << "PLAYER " << player.playerNumber << endl;
    system("pause");
    printUI(player, opponent);
    player.shoot(player, opponent);
    printUI(player, opponent);
    system("pause");
}

void Game::printUI(Player& player, Player& opponent) {
    // Clears the screen and prints UI
    system("CLS");
    std::cout << "PLAYER " << player.playerNumber << "'S TURN:" << endl;
    std::cout << "  YOUR MAP" << endl;
    player.Map.revealGrid();
    std::cout << "  OPPONENT'S MAP" << endl;
    opponent.Map.printGrid();
    std::cout << "Your points: " << player.points << "/" << maxPoints << endl;
    std::cout << "Your health: " << player.healthBar() << endl;
}