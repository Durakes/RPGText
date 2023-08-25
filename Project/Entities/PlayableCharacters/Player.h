#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player
{
private:
    std::string playerName;
    int healthPoints;
    int manaPoints;
    int experiencePoints;
    std::string classPlayer; //* Implementar clase de tipos de clase.
    

public:
    Player();
    ~Player();
};

Player::Player(/* args */)
{
}

Player::~Player()
{
}

#endif