#ifndef COMPANION_H
#define COMPANION_H
#include <iostream>
#include <vector>

class Companion
{
private:
    std::string companionName;
    bool isPlayable;
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
    Companion(/* args */);
    ~Companion();
};

Companion::Companion(/* args */)
{
}

Companion::~Companion()
{
}


#endif