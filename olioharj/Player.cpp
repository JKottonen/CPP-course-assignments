#include "Player.h"
#include <iostream>

Player::Player(int number) {
    playerNumber = number;
}
Player::~Player() {

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

    if(direction == 'N') {
        if((y - (length-1)) < 1) {
            return false;
        }
        for(int i = y; i > y-length; i--) {
            if(Map.getBlock(i,x) == 'O') {
                return false;
            }
        }     
    }

    if(direction == 'S') {
        if((y + (length-1)) > 10) {
            return false;
        }
        for(int i = y; i < y + length; i++) {
            if(Map.getBlock(i,x) == 'O') {
                return false;
            }
        }
    }
    
    if(direction == 'W') {
        if((x - (length-1)) < 1) {
            return false;
        }
        for(int i = x; i > x-length; i--) {
            if(Map.getBlock(y,i) == 'O') {
                return false;
            }
        }  
    }
    if(direction == 'E') {
        if((x + (length-1)) > 10) {
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
    if(direction == 'N') {
        for(int i = y; i > y-length; i--) {
            Map.grid[i][x] = 'O';
        }
    }

    if(direction == 'S') {
        for(int i = y; i < y + length; i++) {
            Map.grid[i][x] = 'O';
        }
    }

    if(direction == 'W') {
        for(int i = x; i > x-length; i--) {
            Map.grid[y][i] = 'O';
        }
    }

    if(direction == 'E') {
        for(int i = x; i < x + length; i++) {
            Map.grid[y][i] = 'O';
        }
    }
    Map.revealGrid();
}
