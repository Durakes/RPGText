#pragma once

#include <iostream>

class Goblin
{
private:
    std::string nameGoblin;
    int healthPoints;
    int experiencePoints;

public:
    Goblin();
    ~Goblin();

    int getHealthPoints();
    void setHealthPoints(int hp);

    std::string getNameGoblin();
    void setNameGoblin(std::string name);

    int getExperiencePoints();
    void setExperiencePoints(int exp);
};

Goblin::Goblin()
{
    nameGoblin = "Gobbo";
    healthPoints = 20;
    experiencePoints = 10;
}

Goblin::~Goblin()
{
}

int Goblin::getHealthPoints() { return this->healthPoints; }
void Goblin::setHealthPoints(int hp) { this->healthPoints = hp; }

std::string Goblin::getNameGoblin() { return this->nameGoblin; }
void Goblin::setNameGoblin(std::string name) { this->nameGoblin = name; }

int Goblin::getExperiencePoints() { return this->experiencePoints; }
void Goblin::setExperiencePoints(int exp) { this->experiencePoints = exp; }
