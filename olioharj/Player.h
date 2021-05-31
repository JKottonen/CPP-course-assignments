#ifndef PLAYER_H
#define PLAYER_H

#include "Grid.h"
#include "Grid.cpp"

class Player
{
private:
    /* data */
public:
    Grid Map;
    Player(int number);
    int playerNumber;
    int points = 0;
};

Player::Player(int number)
{
    playerNumber = number;
}

#endif