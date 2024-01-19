#include "Circle.h"
#include <iostream>
using namespace std;

const double MY_PI = 3.14159;

Circle::Circle()
{
    this->radius = 1.0;
}
Circle::Circle(double r)
{
    cout << "created a new circle" << endl;
    this->radius = r;
}
Circle::~Circle()
{
    cout << "destroying the circle." << endl;
}
double Circle::getRadius() const
{
    return this->radius;
}
double Circle::circumference() const
{
    return this->radius * 2 * MY_PI;
}
double Circle::area() const
{
    return this->radius * this->radius * MY_PI;
}
void Circle::setRadius(double r)
{
    this->radius = r;
}