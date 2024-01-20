#include "Person.h"
#include <stdexcept>
using namespace std;

Person::Person(string name)
{
    setName(name);
}
string Person::getName() const noexcept
{
    // noexcept is recommended since C++ 11 for functions that do not throw exceptions
    return this->name;
}
void Person::setName(string name)
{
    if (name != "John")
    {
        this->name = name;
    }
    else
    {
        throw runtime_error("John? That guy is not considered a person.");
    }
}