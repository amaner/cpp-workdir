#ifndef WARRIOR_H
#define WARRIOR_H

#include "Player.h"
#include <iostream>
using namespace std;

class Warrior : public Player
{
    public:
        Warrior(string name, Race race, int hitPoints, int magicPoints);
        string attack() const;
};

Warrior::Warrior(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
    
}

string Warrior::attack() const
{
    return "I will destroy you with my sword!";
}

#endif