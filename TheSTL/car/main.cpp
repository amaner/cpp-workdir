#include <memory>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Car
{
    public: 
       Car(string color, int doors);
       string getColor() const;
       int getDoors() const; 
    private:
        string color;
        int doors;
};

int main()
{

    unique_ptr <Car> myCar = make_unique<Car>("red", 4);

    cout << "the car's color is: " << myCar->getColor() << endl;
    cout << "and it has this many doors: " << myCar->getDoors() << endl;

    return 0;
}

// class implementation
Car::Car(string color, int doors)
{
    this->color = color;
    this->doors = doors;
}
string Car::getColor() const
{
    return this->color;
}
int Car::getDoors() const
{
    return this->doors;
}