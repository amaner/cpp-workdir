#include "Dog.h"
#include <stdexcept>
using namespace std;

Dog::Dog(string breed)
{

    if (breed != "Poodle")
    {
        this->breed = breed;
    }
    else
    {
        throw runtime_error("A Poodle is not a real dog.");
    }

}

string Dog::getBreed() const noexcept
{
    return this->breed;
}