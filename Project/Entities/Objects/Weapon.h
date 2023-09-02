#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <vector>

class Weapon
{
private:
    std::string weaponName;
    std::string weaponType; //* Sword,Bow,etc...
    bool isRanged;
    std::string attribute;
    double attackPoints;
    double defensePoints;
    std::vector<std::string> attacks;
public:
    Weapon(/* args */);
    ~Weapon();
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}



#endif