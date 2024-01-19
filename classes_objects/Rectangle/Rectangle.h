#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
using namespace std;

class Rectangle {
    public:
        // basic constructor
        Rectangle();
        // destructor
        ~Rectangle();
        // parameterized constructor
        Rectangle(double l, double w);
        // get the length
        double getLength() const;
        // get the width
        double getWidth() const;
        // set the length
        void setLength(double l);
        // set the width
        void setWidth(double w);
        // calculate the area
        double area() const;
        // calculate the perimeter
        double perimeter() const;
        // print properties
        void print() const;

    private:
        double length;
        double width;

};

#endif