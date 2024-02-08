#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(double l, double w)
{
    cout << "creating the requested rectangle" << endl;
    this->length = l;
    this->width = w;
}

double Rectangle::getLength() const
{
    return this->length;
}

double Rectangle::getWidth() const
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

void Rectangle::setLength(double length)
{
    this->length = length;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

// operator overloads

// first one overloads the binary equality test operator
// to test if two rectangles are equal to each other
bool Rectangle::operator==(const Rectangle& other) const
{
    // if length and width of the other rectangle are equal
    // to this rectangle's length and width, respectively, 
    // return true, else return false
    return length == other.length && width == other.width;
}

// this one overloads the not equal operator to test whether
// two rectangles are unequal
bool Rectangle::operator!=(const Rectangle& other) const
{
    return length != other.length || width != other.width;
}

// this one overloads the addition / concatenation operator to
// add the length (width) of another rectangle to this rectangle's
// length (width)
Rectangle Rectangle::operator+(const Rectangle& other) const
{
    Rectangle newRect(length + other.length, width + other.width);
    return newRect;
}

// this one overloads the assignment operator to set this rectangle
// equal to the other 
void Rectangle::operator=(const Rectangle& other)
{
    length = other.length;
    width = other.width;
}