#ifndef PLAYER_H
#define PLAYER_H

#include "Grid.h"

class Player
{
private:
    /* data */
public:
    Grid Map;
    Player(int number);
    int playerNumber;
    int points = 0;
    void shoot(Player& opponent, int y, int x);
};

#endif