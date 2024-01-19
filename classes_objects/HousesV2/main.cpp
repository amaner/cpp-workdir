#include <iostream>
#include <string>
#include "House.h" // House class definition
using namespace std;

int main()
{
    // declare house objects
    House House1("green", "Andrew", 2, 10);
    House House2("blue", "Steve", 3, 12);
    // quick print of House1 to illustrate the constructor
    // advantage of having a parameterized constructor is
    // being able to fill its properties at creation
    House1.print();
    House2.print();
    
    return 0;
}
