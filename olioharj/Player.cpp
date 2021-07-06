#include "Player.h"
#include <iostream>

Player::Player(int number)
{
    playerNumber = number;
}

void Player::shoot(Player& opponent, int y, int x) {
    cout << opponent.Map.getBlock(y, x) << endl;
}