#ifndef FIRSTSCREEN_H
#define FIRSTSCREEN_H

#include <iostream>
#include "../Entities/PlayableCharacters/Player.h"
#include "../Helpers/Constants.h"

void FirstScreen();
const char *GetName();
Player CreatePlayer(const char *playerName);

#endif