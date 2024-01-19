#ifndef CIRCLE_H
#define CIRCLE_H

class Circle 
{

    public: // member functions
        Circle(); // basic constructor defaults to r=1
        Circle(double r); // construct circle with given radius
        ~Circle(); // destructor
        double getRadius() const; // return circle radius
        double circumference() const; // return circle circumference
        double area() const; // return circle area
        void setRadius(double r); // set a new radius
    
    private: // properties
        double radius;

};

#endif