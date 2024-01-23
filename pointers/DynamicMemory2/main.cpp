#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{

    Dog * myDogPtr = new Dog("Rover", "German Shepherd");
    Dog * yourDogPtr = new Dog("Fido", "Beagle");

    // print out info using arrow member access
    // arrow does automatic dereferencing
    cout << "using arrow member access" << endl;
    cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
    cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;

    cout << endl;

    // print out info using dereferencing and dot operator
    cout << "using dereferencing with dot operator" << endl;
    cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
    cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

    // return memory to the heap
    delete myDogPtr;
    delete yourDogPtr;

    // good practice
    myDogPtr = nullptr;
    yourDogPtr = nullptr;


    return 0;
}