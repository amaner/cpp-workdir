#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

// a base class for animals
// having virtual functions makes this an abstract class
class Animal {

    public:
        Animal(string name, double weight);
        virtual ~Animal();
        string getName() const;
        double getWeight() const;
        void setName(string name);
        void setWeight(double weight);
        virtual string makeNoise() const = 0; // pure virtual function used by derived classes
        virtual string eat() const = 0; // also used by derived classes
    
    private:
        string name;
        double weight;

};


#endif