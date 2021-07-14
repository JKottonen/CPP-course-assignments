#ifndef PLAYER_H
#define PLAYER_H

#include "string"
#include "Grid.h"

class Player
{
private:

public:
    Player(int number, int maxPoints);
    ~Player();

    Grid Map;
    int playerNumber;
    int points = 0;
    int health;
    int maxHealth;

    int charToInt(char alphabet);
    void addShips(string shipSeed);
    bool checkShipSpace(int y, int x, int length, char direction);
    void addShip(int y, int x, int length, char direction);
    bool shoot(Player& opponent);
};

#endif