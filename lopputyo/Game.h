#ifndef GAME_H
#define GAME_H

#include "Player.h"

class Game {
    private:
        string shipSeed = "5";
        int countMaxPoints(string shipSeed);

    public:
        Game();
        ~Game();
        int maxPoints;

        Player Player1;
        Player Player2;

        void setShipSeed();
        void turn(Player& player, Player& opponent);
        void gameloop();
        void printUI(Player& player, Player& opponent);

};

#endif