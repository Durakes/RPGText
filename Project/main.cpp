#include <conio.h>
#include "Screens/FirstScreen.h"

int main()
{
    system("cls");
    //! Definir nombre del RPG
    //! Todas las lineas de texto deben de leerse de un archivo 
    std::cout << "Welcome to Text RPG" << std::endl;
    std::cout << "Press Enter to start/continue the game." << std::endl;
    int ch = getch();
    if(ch != 13)
    {
        system("cls");
        std::cout << "Don't press any other key, just press Enter" << std::endl;
        //! Falta implementar que reciba el input correcto
    }else
    {
        FirstScreen();
    }
    
    return 0;
}