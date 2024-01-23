#include "Circles.h"

Circle::Circle(double r)
{
    this->radius = r;
}

double Circle::getArea()
{
    return this->radius * this->radius * 3.14159;
}

double Circle::getCircumference()
{
    return this->radius * 2 * 3.14159;
}