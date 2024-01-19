#include "Pizza.h"
#include <iostream>
#include <string>
using namespace std;

// constructor
Pizza::Pizza(string n, int c, int d)
{
    this->name = n;
    this->cost = c;
    this->diameter = d;
    this->toppings.push_back("cheese"); // base pizza always has cheese
}
// destructor
Pizza::~Pizza()
{
    cout << this->name << " is being destroyed." << endl;
}
// add toppings
void Pizza::addTopping(string t)
{
    this->toppings.push_back(t);
}
// get cost
int Pizza::getCost() const
{
    return this->cost;
}
// get name
string Pizza::getName() const 
{
    return this->name;
}
// get diameter
int Pizza::getDiameter() const
{
    return this->diameter;
}
// print toppings
void Pizza::printToppings() const
{
    cout << "Here are your toppings: " << endl;
    for (string t : this->toppings)
    {
        cout << t << endl;
    }
}