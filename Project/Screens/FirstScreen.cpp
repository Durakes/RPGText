#ifndef FIRSTSCREEN_CPP
#define FIRSTSCREEN_CPP

#include "FirstScreen.h"

void FirstScreen()
{
    system("cls");
    std::cout << "Welcome to your adventure." << std::endl;
    std::cout << "Please introduce yourself" << std::endl;
    const char *username = GetName();
    Player player = CreatePlayer(username);
    const char *name2 = player.getPlayerName();
    std::string temp = name2;
    std::cout << "Nice to meet you, " << temp << " you are about to live a wonderful and misterious adventure" << std::endl;
    std::cout << "Just close your eyes and welcome the awesome world of " << TextRPG::UNIVERSE_NAME << std::endl;
}

const char *GetName()
{
    std::string name;
    std::cin >> name; //! Implementar luego el aceptar nombres con espacios | Y tambien implementar límite de caracteres.
    std::cin.ignore();
    return name.c_str();
}

Player CreatePlayer(const char *playerName)
{
    Player player(playerName);
    return player;
}

#endif