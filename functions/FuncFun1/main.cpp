#include <iostream>
using namespace std;

void printSomething(); // function prototype before main
void printMyName(); 

int main() // main function is automatically called by c++ runtime
{

    printSomething(); // main is invoking the function
    printMyName();

    return 0;
}

// function definition
void printSomething() // function header - return type, identifier, parameter list
{
    // function body
    cout << "Hello there, I'm a function." << endl;
}

void printMyName()
{
    cout << "My name is Andrew Maner." << endl;
}