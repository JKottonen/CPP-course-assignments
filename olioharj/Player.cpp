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

bool Player::checkShipSpace(int y, int x, int length, char direction) {
    if(y > 10 || y < 1) {
        return false;
    }
    if(x > 10 || x < 1) {
        return false;
    }

    if(direction == 'n') {
        if((y - length) < 1) {
            return false;
        }
        for(int i = y; i > y-length; i--) {
            if(Map.getBlock(i,x) == 'O') {
                return false;
            }
        }     
    }

    if(direction == 's') {
        if((y + length) > 10) {
            return false;
        }
        for(int i = y; i < y + length; i++) {
            if(Map.getBlock(i,x) == 'O') {
                return false;
            }
        }
    }
    
    if(direction == 'w') {
        if((x - length) < 1) {
            return false;
        }
        for(int i = x; i > x-length; i--) {
            if(Map.getBlock(y,i) == 'O') {
                return false;
            }
        }  
    }
    if(direction == 'e') {
        if((x + length) > 10) {
            return false;
        }
        for(int i = x; i < x + length; i++) {
            if(Map.getBlock(y,i) == 'O') {
                return false;
            }
        } 
    }
    return true;
}

void Player::addShip(int y, int x, int length, char direction) {
    if(direction == 'n') {
        for(int i = y; i > y-length; i--) {
            Map.grid[i][x] = 'O';
        }
    }

    if(direction == 's') {
        for(int i = y; i > y + length; i++) {
            Map.grid[i][x] = 'O';
        }
    }

    if(direction == 'w') {
        for(int i = x; i > x-length; i--) {
            Map.grid[y][i] = 'O';
        }
    }

    if(direction == 'e') {
        for(int i = x; i > x + length; x++) {
            Map.grid[y][i] = 'O';
        }
    }
    Map.revealGrid();
}
