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
    bool checkShipSpace(int y, int x, int length, char direction);
    void addShip(int y, int x, int length, char direction);
    void shoot(Player& opponent, int y, int x);
};

#endif