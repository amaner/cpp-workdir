#ifndef PRIEST_H
#define PRIEST_H

#include "Player.h"
#include <iostream>
using namespace std;

class Priest : public Player
{
    public:
        Priest(string name, Race race, int hitPoints, int magicPoints);
        string attack() const;
    private:
        int hitPoints;
        int magicPoints;
};

Priest::Priest(string name, Race race, int hitPoints, int magicPoints) : Player(name, race, hitPoints, magicPoints)
{
    
}

string Priest::attack() const
{
    return "I will smite you with holy wrath!";
}

#endif