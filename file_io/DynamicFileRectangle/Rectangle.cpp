#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double l, double w)
{
    this->length = l;
    this->width = w;
}

double Rectangle::area()
{
    return this->length * this->width;
}

double Rectangle::perimeter()
{
    return this->length * 2 + this->width * 2;
}