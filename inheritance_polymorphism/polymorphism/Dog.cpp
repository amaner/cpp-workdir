#include "Dog.h"
#include <iostream>
using namespace std;

// we have to inherit the Animal constructor, which means we only need to set breed here
Dog::Dog(string name, double weight, string breed) : Animal(name, weight)
{
    this->breed = breed;
}

string Dog::getBreed() const
{
    return this->breed;
}

void Dog::digHole() const
{
    cout << "I'm digging a hole!" << endl;
}

// this is a method override (different from an overload)
// function signature must be identical, and can only occur in inheritance hierarchy
string Dog::makeNoise() const
{
    return "woof!";
}

void Dog::chaseCat() const
{
    cout << "Here, kitty kitty!" << endl;
}

string Dog::eat() const
{
    return "I love dog food!";
}