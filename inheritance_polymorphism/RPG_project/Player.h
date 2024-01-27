#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;

// RACE type
enum Race { HUMAN, ELF, DWARF, ORC, TROLL };

class Player
{

    public:
        Player(string name, Race race, int hitPoints, int magicPoints);
        virtual ~Player();
        string getName() const;
        Race getRace() const;
        string whatRace() const;
        int getHitPoints() const;
        int getMagicPoints() const;
        void setName(string name);
        void setRace(Race race);
        void setHitPoints(int points);
        void setMagicPoints(int magicPoints);
        virtual string attack() const = 0; // pure virtual method

    private:
        string name;
        Race race;
        int hitPoints;
        int magicPoints;

};

#endif