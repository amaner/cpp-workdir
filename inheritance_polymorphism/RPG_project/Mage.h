#ifndef MAGE_H
#define MAGE_H

#include "Player.h"
#include <iostream>
using namespace std;

class Mage : public Player
{
    public:
        Mage(string name, Race race, int hitPoints, int magicPoints);
        string attack() const;
    
};

Mage::Mage(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
    
}

string Mage::attack() const
{
    return "I will crush you with arcane missiles!";
}

#endif