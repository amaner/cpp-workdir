#include <iostream>
#include "House.h"

/* HOUSE implementation file */
// member methods for the House class, defined in House.h
// including the class name (House) and scope resolution operator (::)
// between return type and method establishes ownership
// basic constructor
House::House()
{
    this->color = "white";
    this->ownership = "Nobody";
    this->numStories = 1;
    this->numWindows = 4;
}
// parameterized constructor
House::House(string col, string owner, int stories, int windows)
{
    this->color = col;
    this->ownership = owner;
    this->numStories = stories;
    this->numWindows = windows;
}
// destructor - just for show at this point as the compiler automatically creates
// one if we don't provide one
House::~House()
{
    cout << "The " << color << " house is being destroyed!" << endl;
}
// setters
void House::setNumStories(int numStories)
{
    this->numStories = numStories;
}
void House::setNumWindows(int numWindows)
{
    this->numWindows = numWindows;
}
void House::setColor(string color)
{
    this->color = color;
}
void House::setOwnership(string ownership)
{
    this->ownership = ownership;
}
// getters
// the const modifier ensures the method cannot alter the property
// we're clearly not trying to, but imagine instead you wanted to return
// the value incremented - the const modifier would be useful there
int House::getNumStories() const
{
    return numStories;
}
int House::getNumWindows() const
{
    return numWindows;
}
string House::getColor() const
{
    return color;
}
string House::getOwnership() const
{
    return ownership;
}
// general
void House::print() const
{
    cout << ownership << "'s house is " << color << " and has "
    << numStories << " stories and " << numWindows << " windows." << endl;
}