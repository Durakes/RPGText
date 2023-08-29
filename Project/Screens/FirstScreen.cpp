#ifndef FIRSTSCREEN_CPP
#define FIRSTSCREEN_CPP
#include <iostream>
#include "../Helpers/Constants.h"

namespace FirstScreen
{
    void FirstScreen();
    std::string GetName();

    void FirstScreen()
    {
        system("cls");
        std::cout << "Welcome to your adventure." << std::endl;
        std::cout << "Please introduce yourself" << std::endl;
        std::string username = GetName();
        std::cout << "Nice to meet you, " << username << " you are about to live a wonderful and misterious adventure" << std::endl;
        std::cout << "Just close your eyes and welcome the awesome world of " << TextRPG::UNIVERSE_NAME << std::endl;
    }

    std::string GetName()
    {
        std::string name;
        std::cin >> name; //! Implementar luego el aceptar nombres con espacios | Y tambien implementar límite de caracteres.
        std::cin.ignore();
        return name;
    }
}

#endif