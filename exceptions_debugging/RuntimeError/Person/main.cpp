#include <iostream>
#include <stdexcept>
#include "Person.h"


int main()
{
    // we have introduced a very silly runtime_error in Person.cpp
    // but it is caught here and none of the prints happen as a result
    // but -- the code did not crash
    try
    {
        Person person1("Bob");
        Person person2("Sally");
        Person person3("John");
        Person person4("William");

        cout << person1.getName() << endl;
        cout << person2.getName() << endl;
        cout << person3.getName() << endl;
        cout << person4.getName() << endl;

    }
    catch(const runtime_error& e)
    {
        cout << e.what() << endl;
        // std::exception defines the what() method, but runtime_error inherits from it
        // so the function is available here
    }
    

    return 0;
}