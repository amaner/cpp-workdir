#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double l, double w)
{
    cout << "creating the requested rectangle" << endl;
    this->length = l;
    this->width = w;
}

double Rectangle::getLength()
{
    return this->length;
}

double Rectangle::getWidth()
{
    return this->width;
}

double Rectangle::area()
{
    return this->length * this->width;
}

double Rectangle::perimeter()
{
    return 2 * this->length + 2 * this->width;
}