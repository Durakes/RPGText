#ifndef PLAYER_CPP
#define PLAYER_CPP

#include "Player.h"

Player::Player(std::string playerName)
{
    //! Falta implementar clases, clase estandar por mientras.

    this->playerName = playerName;
    this->healthPoints = 10;
    this->healthPoints = 10;
    this->experiencePoints = 0;

    this->attackPoints = 3;
    this->specialAttackPoints = 2;
    this->defensePoints = 3;
    this->criticalRate = 0.1;
    this->evasionRate = 0.1;
    this->magicalResistance = 0.05;
    this->physicalResistance = 0.1;

    this->physicalAttacks = {"Punch", "Kick"};
}

std::string Player::getPlayerName() { return this->playerName; }
void Player::setPlayerName(std::string name) { this->playerName = name; }

#endif