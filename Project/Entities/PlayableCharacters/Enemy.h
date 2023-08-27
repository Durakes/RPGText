#ifndef ENEMY_H
#define ENEMY_H
#include <iostream>

class Enemy
{
private:
    std::string enemyName;
    int healthPoints;
    int manaPoints;
    int experiencePoints;
    std::string enemyClass; //* Implementar enum

public:
    Enemy(/* args */);
    ~Enemy();
};

Enemy::Enemy(/* args */)
{
}

Enemy::~Enemy()
{
}



#endif