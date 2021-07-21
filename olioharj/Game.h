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

        void turn(Player& player, Player& opponent);
        void gameloop();

};

#endif