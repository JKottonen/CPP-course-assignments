#ifndef PLAYER_H
#define PLAYER_H

#include "Grid.h"

class Player
{
private:
    Ship* m_navy;
    int m_navySize;
public:
    Player(int number, int navySize);
    ~Player();
    Grid Map;
    int playerNumber;
    int points = 0;
    void addShip(int y, int x, Ship::Direction direction);
    void shoot(Player& opponent, int y, int x);
};

#endif