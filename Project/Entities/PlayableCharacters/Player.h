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
    int levelName;
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
    Player(std::string playerName);
    //~Player();

    std::string getPlayerName();
    void setPlayerName(std::string name);

    /*int getHealthPoints();
    void setHealthPoints(int health);

    int getManaPoints();
    void setManaPoints(int mana);

    int getExperiencePoints();
    void setExperiencePoints(int experience);*/

    //std::string get

};


#endif