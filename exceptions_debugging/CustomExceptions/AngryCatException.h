#ifndef ANGRY_CAT_EXCEPTION_H
#define ANGRY_CAT_EXCEPTION_H

#include <stdexcept>
using namespace std;

 
// Our class will publicly inherit from runtime_error
// so our class will expose the public methods in runtime_error
class AngryCatException : public runtime_error
{

    public:
        AngryCatException() : runtime_error("Made kitty angry!")
        {
            
        }
        AngryCatException(const string& e) : runtime_error(e)
        {

        }
};

#endif