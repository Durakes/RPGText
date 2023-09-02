#ifndef ARMOR_H
#define ARMOR_H

#include <iostream>

class Armor
{
private:
    std::string nameArmor;
    std::string armorType;
    double defensePoints;
    double magicDefensePoints;
    std::string bodyPart;


public:
    Armor(/* args */);
    ~Armor();
};

Armor::Armor(/* args */)
{
}

Armor::~Armor()
{
}


#endif