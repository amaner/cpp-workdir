#include <iostream>
#include <stdexcept>
#include "Dog.h"

int main()
{
    
    // these commands run perfectly fine
    Dog dog1("German Shorthaired Pointer");
    Dog dog2("American Bulldog");
    Dog dog3("Mutt");
    cout << dog1.getBreed() << endl;
    cout << dog2.getBreed() << endl;
    cout << dog3.getBreed() << endl;

    // by catching the runtime_error, we exit "gracefully"
    try
    {
        Dog dog4("Poodle");
    }
    catch(const runtime_error& e)
    {
        cout << e.what() << endl;
    }
    // see, a poodle isn't a real dog


    return 0;
}