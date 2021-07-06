#include "Player.h"
#include <iostream>

Player::Player(int number, int navySize) {
    playerNumber = number;
    m_navySize = navySize;
    m_navy = new Ship[navySize];
}
Player::~Player() {
    delete[] m_navy;
}

void Player::shoot(Player& opponent, int y, int x) {
    cout << opponent.Map.getBlock(y, x) << endl;
}