#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>

class Player
{
private:
    //! Separar por atributos en clases mas pequeñas que se puedan reutilizar.
    const char* playerName;
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
    std::vector<std::string> physicalAttacks; //* Implementar clase de ataques.
    std::vector<std::string> magicalAttacks;
    std::vector<std::string> objects; //* Separar en inventario.

public:
    Player(const char* playerName);
    //~Player();

    const char* getPlayerName();
    void setPlayerName(const char* name);

    /*int getHealthPoints();
    void setHealthPoints(int health);

    int getManaPoints();
    void setManaPoints(int mana);

    int getExperiencePoints();
    void setExperiencePoints(int experience);*/

    //std::string get

};


#endif