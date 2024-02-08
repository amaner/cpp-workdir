#ifndef ALIEN_H
#define ALIEN_H

class Alien
{

    public:
        Alien(int weight, int height, char gender);
        int getWeight() const;
        int getHeight() const;
        char getGender() const;
        int getPrestige() const;
        // operator overloads
        bool operator==(Alien& other) const; // are two aliens equal?
        bool operator!=(Alien& other) const; // are two aliens not equal?
        bool operator>(Alien& other) const; // compare using prestige 
        bool operator>=(Alien& other) const; // compare using prestige
        bool operator<(Alien& other) const; // compare using prestige
        bool operator<=(Alien& other) const; // compare using prestige
        Alien operator+(Alien& other) const; // breed two aliens to create a new one
        void operator=(Alien& other); // set one alien equal to another
    
    private:
        int weight;
        int height;
        char gender;

};

#endif