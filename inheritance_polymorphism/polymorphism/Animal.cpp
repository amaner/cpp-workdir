#include "Animal.h"

Animal::Animal(string name, double weight)
{
    this->name = name;
    this->weight = weight;
}
string Animal::getName() const
{
    return this->name;
}
double Animal::getWeight() const
{
    return this->weight;
}
void Animal::setName(string name)
{
    this->name = name;
}
void Animal::setWeight(double weight)
{
    this->weight = weight;
}
Animal::~Animal()
{

}
/* 
string Animal::makeNoise() const
{
    return "unkown"; // generic animal will not make specific noise
} 

commented this out to illustrate pure virtual functions
makeNoise only implemented in derived classes
*/