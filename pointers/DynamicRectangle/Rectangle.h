#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {

    public:
        Rectangle(double l, double w);
        double getLength();
        double getWidth();
        double area();
        double perimeter();

    private:
        double length;
        double width;

};

#endif