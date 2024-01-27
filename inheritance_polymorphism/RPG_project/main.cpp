#include <iostream>
#include <vector>
#include "Player.h"
#include "Warrior.h"
#include "Mage.h"
#include "Priest.h"

using namespace std;

// helper functions
string getPlayerClass();
string getPlayerName();
Race getPlayerRace();

int main()
{
    // verified the classes work as expected
    /* Race race = ORC;
    Player* warPtr = new Mage("Steve", race, 150, 150);
    cout << "name is: " << warPtr->getName() << endl;
    cout << "class is: " << warPtr->whatRace() << endl;
    cout << "hit points: " << warPtr->getHitPoints() << endl;
    cout << "magic points: " << warPtr->getMagicPoints() << endl;
    cout << "attack: " << ((Priest*)warPtr)->attack() << endl; */

    int numPlayers; // how many to create
    string playerClass;
    string playerName;
    Race playerRace;
    // prompt user for this number
    cout << "Welcome! How many characters would you like to create?" << endl;
    cin >> numPlayers;
    // we'll store the players in a vector of pointers
    // due to polymorphism, they can point to any of the derived class types
    vector<Player*> playerList;
    for (int i=0; i<numPlayers; i++)
    {
        cout << "Getting information for character " << i << "." << endl;
        playerClass = getPlayerClass();
        playerName = getPlayerName();
        playerRace = getPlayerRace();
        if (playerClass == "warrior")
        {
            playerList.push_back(new Warrior(playerName, playerRace, 200, 0));
        }
        else if (playerClass == "priest")
        {
            playerList.push_back(new Priest(playerName, playerRace, 100, 200));
        }
        else // playerClass is mage
        {
            playerList.push_back(new Mage(playerName, playerRace, 150, 150));
        }
        
    }
    cout << "Here are your players: " << endl;
    for (Player * player : playerList)
    {
        cout << "Name: " << player->getName() << endl;
        cout << "Race: " << player->whatRace() << endl;
        cout << "Hit points: " << player->getHitPoints() << endl;
        cout << "Magic Points: " << player->getMagicPoints() << endl;
        cout << "Attack: " << player->attack() << endl;
    }
    for (Player * player : playerList)
    {
        delete player;
        player = nullptr;
    }
    return 0;
}

string getPlayerClass()
{
    string tmpClass;
    cout << "Please enter the player's class (warrior, priest, mage): " << endl;
    cin >> tmpClass;
    return tmpClass;
}
string getPlayerName()
{
    string tmpName;
    cout << "Please enter player name: " << endl;
    cin >> tmpName;
    return tmpName;
}
Race getPlayerRace()
{
    int tmp;
    cout << "Please enter player race (0=warrior, 1=elf, 2=dwarf, 3=orc, 4=troll): " << endl;
    cin >> tmp;
    if (tmp == 0)
    {
        return HUMAN;
    }
    else if (tmp == 1)
    {
        return ELF;
    }
    else if (tmp == 2)
    {
        return DWARF;
    }
    else if (tmp == 3)
    {
        return ORC;
    }
    else 
    {
        return TROLL;
    }
}