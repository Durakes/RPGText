#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>

class Player
{
private:
    //! Separar por atributos en clases mas pequeñas que se puedan reutilizar.
    std::string playerName;
    int healthPoints;
    int manaPoints;
    int experiencePoints;
    std::string playableClass; //* Implementar clase de tipos de clase.
    double attackPoints;
    double specialAttackPoints;
    double defensePoints;
    double criticalRate;
    double evasionRate;
    double magicalResistance;
    double physicalResistance;
    std::vector<std::string> attacks; //* Implementar clase de ataques.
    std::vector<std::string> magicalAttacks;
    std::vector<std::string> objects; //* Separar en inventario.

public:
    Player();
    ~Player();

    std::string getPlayerName() { return playerName; }
    void setPlayerName(std::string name) { playerName = name; }

    
};

Player::Player(/* args */)
{
}

Player::~Player()
{
}

#endif