#include <iostream>
#include "D:\Development\SideProjects\RPGText\Project\Entities\PlayableCharacters\Goblin.h"

void IntroBattle(Goblin goblin);
void ActionScreen(std::string playerName);
void ChooseOption(int menuOption);
void AttackSelection();
void AttackAction(int attackChoice);
void BattleLog(int damageDone);

int menuChoice;
int attackChoice;
int damageDone;


int main()
{
    Goblin goblin = Goblin();
    
    std::cout << goblin.getNameGoblin() << std::endl;
    IntroBattle(goblin);
    ActionScreen("Player");


}

//! Falta implementar las demas acciones, y cambiar por clases.

void IntroBattle(Goblin goblin)
{
    //! Probar con strings primero, pero debe de recibir los objetos como paremetros.
    system("cls");
    std::cout << "You are about to enter battle with " << goblin.getNameGoblin() << "!!!" << std::endl;
    std::cout << "Prepare Yourself!!!" << std::endl;
    std::cout << "Press Enter to iniate combat!" << std::endl;
    std::cin.get();

    //Comentario prueba
    
}

void ActionScreen(std::string playerName)
{
    //! Probar solo con strings, pero debe de recibir objetos como parametros.
    system("cls");
    std::cout << "It's your turn " << playerName << ", choose wisely!!" << std::endl;
    std::cout << "1. Attack" << std::endl;
    std::cout << "2. Defend" << std::endl;
    std::cout << "3. Object" << std::endl;
    std::cout << "4. Run!!!" << std::endl;
    
    std::cin >> menuChoice;


    ChooseOption(menuChoice);
}

void ChooseOption(int menuChoice)
{
    switch (menuChoice)
    {
    case 1:
        AttackSelection();
        break;
    
    default:
        break;
    }
}

void AttackSelection()
{
    system("cls");
    std::cout << "Select your attack wisely!!!" << std::endl;
    std::cout << "1. Kick" << std::endl;
    std::cout << "2. Stab" << std::endl;
    std::cout << "3. Back to menu" << std::endl;

    std:: cin >> attackChoice;

    AttackAction(attackChoice);
}

//! Funciones temporales solo para probar
//! Con el simple id del ataque se deberia de poder acceder al battlelog
void AttackAction(int attackChoice)
{
    switch (attackChoice)
    {
    case 1:
        damageDone = 5;
        BattleLog(damageDone);
        break;
    case 2:
        damageDone = 10;
        BattleLog(damageDone);
        break;
    default:
        break;
    }
}

void CalculateDamage(Goblin* gob)
{
    
}

void BattleLog(int damageDone)
{
    //! Mostrar el nombre del jugador y nombre del ataque,y nombre del enemigo
    system("cls");
    std::cout << "PLAYER has attacked GOBLIN with KICK." << std::endl;
    std::cout << "GOBLIN recieves " << damageDone << " damage." << std::endl;
    std::cout << "GOBLIN has attacked PLAYER with STAB." << std::endl;
    std::cout << "PLAYER recieves 10 damage." << std::endl;
}