#include "Alien.h"
#include <cstdlib>
#include <ctime>

using namespace std;

// constructor
Alien::Alien(int weight, int height, char gender)
{
    this->weight = weight;
    this->height = height;
    this->gender = gender;
}
// get the weight
int Alien::getWeight() const
{
    return weight;
}
// get the height
int Alien::getHeight() const
{
    return height;
}
// get the gender
char Alien::getGender() const
{
    return gender;
}
// calculate and return the prestige
int Alien::getPrestige() const
{
    int gp; // "gender points"
    // assumption is gender is either F or M
    if (gender == 'F')
    {
        gp = 3;
    }
    else 
    {
        gp = 2;
    }
    return height * weight * gp;
}

/* OPERATOR OVERLOADS */
/*
    Comparisons - two aliens are compared via prestige
        == if they have same prestige
        != if they do not have same prestige
        > if one on left has greater prestige
        >= if one on left has greater than or equal prestige
        < if one on right has greater prestige
        <= if one on right has greater than or equal prestige

    Assignment - 
        = set current alien equal to other alien (clone an alien)
    
    Breeding -
        + two aliens are bred using the + operator
            - new alien's weight is average of parents' weights
            - new alien's height is average of parents' heights
            - new alien's gender is randomly determined
                - 30% chance to pass on F and 70% to pass on M
*/
// comparisons
bool Alien::operator==(Alien& other) const
{
    return getPrestige() && other.getPrestige();
}
bool Alien::operator!=(Alien& other) const
{
    return getPrestige() != other.getPrestige();
}
bool Alien::operator>(Alien& other) const
{
    return getPrestige() > other.getPrestige();
}
bool Alien::operator>=(Alien& other) const
{
    return getPrestige() >= other.getPrestige();
}
bool Alien::operator<(Alien& other) const
{
    return getPrestige() < other.getPrestige();
}
bool Alien::operator<=(Alien& other) const
{
    return getPrestige() <= other.getPrestige();
}
// assignment - cloning operation
void Alien::operator=(Alien& other)
{
    weight = other.weight;
    height = other.height;
    gender = other.gender;
}
// breeding
Alien Alien::operator+(Alien& other) const
{
    srand(time(nullptr));
    int randNum = rand() % 10 + 1; // return random number 1 - 10
    char newGender;
    int newWeight = (weight + other.weight) / 2; // ave of parents'
    int newHeight = (height + other.height) / 2; // ave of parents'
    if (randNum < 4)
    {
        // 30% chance female
        newGender = 'F';
    }
    else
    {
        // 70% chance male
        newGender = 'M';
    }
    return Alien(newWeight, newHeight, newGender);
}