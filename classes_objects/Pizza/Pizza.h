#ifndef PIZZA_H
#define PIZZA_H

#include <iostream>
#include <string>
using namespace std;

class Pizza {

    public: // member functions
        Pizza(string n, int c, int d); // constructor
        ~Pizza(); // destructor
        void addTopping(string t); // add a topping to the pizza
        int getCost() const; // get the cost of the pizza
        int getDiameter() const; // get the diameter of the pizza
        string getName() const; // get the pizza name
        void printToppings() const; // print out all toppings on the pizza

    private: // properties
        string name; 
        int cost;
        int diameter;
        vector <string> toppings;

};

#endif