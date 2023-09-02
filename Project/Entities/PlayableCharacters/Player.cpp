#ifndef PLAYER_CPP
#define PLAYER_CPP

#include "Player.h"

Player::Player(const char* playerName)
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

const char* Player::getPlayerName() { return this->playerName; }
void Player::setPlayerName(const char* name) { this->playerName = name; }

#endif