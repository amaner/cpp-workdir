#include <iostream>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
using namespace std;

int main()
{

    // from the previous section, illustrating Dog : Animal
    // Animal myAnimal("Sam", 100); can't do this anymore
    // Dog dog("Lola", 50, "GSP");

    // now we create a new dog as an animal pointer to a dog object
    // this is a "polymorphic reference"
    Animal* dogPtr = new Dog("Fido", 115, "Golden Retriever");
    Animal* catPtr = new Cat("Puss n Boots", 20);

    cout << "Dog stuff inbound: " << endl;
    cout << "Make noise? " << dogPtr->makeNoise() << endl;
    cout << "Eating? " << dogPtr->eat() << endl;
    cout << "What are you up to?" << endl;
    ((Dog*)dogPtr)->chaseCat(); // cast it to a Dog type since this method is not in Animal
    
    cout << "Cat stuff inbound: " << endl;
    cout << "Make noise? " << catPtr->makeNoise() << endl;
    cout << "Eating? " << catPtr->eat() << endl;
    cout << "What are you up to?" << endl;
    ((Cat*)catPtr)->chaseMouse(); // same as in chaseCat case

    /*  c++ uses by default static, or "early" binding - function call is bound 
        to a function at compile time. 

        the dog in this case makes an unknown noise as a result

        so, we go back to the base class and add "virtual" to the prototype of makeNoise
        this forces late binding - at runtime - so we get the right version of makeNoise
        late binding enables polymorphism ("many forms") 

        moreover, if we make it a pure virtual function (virtual keyword and pure
        specifier "= 0" after, then remove the implementation from the base class), we get
        more reasonable behavior - no more "unknown" noise, the makeNoise function is only present
        in derived classes

        having a pure virtual function in Animal means it is an abstract class, so we cannot
        instantiate an Animal object. We can only use its properties/methods from which to derive
        other animals. (We can still create animal pointers, just not objects)

        Of note: This gave me a compile error related to deleting an abstract object with 
        non-virtual destructor. So, I gave it a virtual destructor and that fixed the issue.
        The instructor did not, but also did not have the error. He is using Visual Studio, so
        it's possible that is doing something different.

    */

    delete dogPtr; // free the memory
    delete catPtr;
    dogPtr = nullptr;
    catPtr = nullptr;

    return 0;
}