#include "Dog.h"
#include <iostream>
using namespace std;

// have to inherit the Animal constructor, which means we only need to set breed here
Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
    this->breed = breed;
}

string Dog::getBreed() const
{
    return this->breed;
}

string Dog::digHole() const
{
    return "I'm digging a hole!";
}

string Dog::makeNoise() const
{
    return "woof!";
}

void Dog::chaseCat() const
{
    cout << "I'm coming for you, kitty!" << endl;
}

string Dog::eat() const
{
    return "I love dog food!";
}