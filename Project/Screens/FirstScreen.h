#ifndef FIRSTSCREEN_H
#define FIRSTSCREEN_H

#include <iostream>
#include "../Entities/PlayableCharacters/Player.h"
#include "../Helpers/Constants.h"

void FirstScreen();
std::string GetName();
Player CreatePlayer(std::string playerName);

#endif