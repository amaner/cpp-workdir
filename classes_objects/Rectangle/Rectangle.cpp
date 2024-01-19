#include <iostream>
#include "Rectangle.h" 

/* RECTANGLE implementation file */

// basic constructor
Rectangle::Rectangle()
{
    cout << "Creating plane jane rectangle." << endl;
    this->length = 0.0;
    this->width = 0.0;
}
// parameterized constructor
Rectangle::Rectangle(double l, double w)
{
    cout << "Creating rectangle with length " << l << " and width " << w << "." << endl;
    this->length = l;
    this->width = w;
}
// destructor - just for show
Rectangle::~Rectangle()
{
    cout << "The rectangle with length " << length << " and width " 
    << width << " is being destroyed!" << endl;
}
// setters
void Rectangle::setLength(double l)
{
    this->length = l;
}
void Rectangle::setWidth(double w)
{
    this->width = w;
}
// getters
double Rectangle::getLength() const
{
    return this->length;
}
double Rectangle::getWidth() const
{
    return this->width;
}
// area
double Rectangle::area() const
{
    return this->length * this->width;
}
// perimeter
double Rectangle::perimeter() const
{
    return this->length * 2 + this->width * 2;
}
// print
void Rectangle::print() const
{
    cout << "This rectangle has length " << length
    << " and width " << width << "." << endl;
}