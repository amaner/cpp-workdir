#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(string name, Race race, int hitPoints, int magicPoints)
{
    this->name = name;
    this->race = race;
    this->hitPoints = hitPoints;
    this->magicPoints = magicPoints;
}

string Player::getName() const
{
    return this->name;
}

Race Player::getRace() const
{
    return this->race;
}

string Player::whatRace() const
{
    if (this->race == HUMAN)
    {
        return "human";
    }
    else if (this->race == ELF)
    {
        return "elf";
    }
    else if (this->race == DWARF)
    {
        return "dwarf";
    }
    else if (this->race == ORC)
    {
        return "orc";
    }
    else // it's a troll
    {
        return "troll";
    }
}

int Player::getHitPoints() const
{
    return this->hitPoints;
}

int Player::getMagicPoints() const
{
    return this->magicPoints;
}

void Player::setName(string name)
{
    this->name = name;
}

void Player::setRace(Race race)
{
    this->race = race;
}

void Player::setHitPoints(int hitPoints)
{
    this->hitPoints = hitPoints;
}

void Player::setMagicPoints(int magicPoints)
{
    this->magicPoints = magicPoints;
}

Player::~Player()
{

}
