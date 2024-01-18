#include <iostream>
using namespace std;

// global variable
double myGlobalDouble = 3.14159;
// function prototype
void someFunc(int aParam);

int main()
{

    int localToMain = 20;
    cout << "The local to main variable is " << localToMain << endl;
    cout << "The global double (in main) is " << myGlobalDouble << endl;

    someFunc(25);
    someFunc(28);
    someFunc(32);


    return 0;
}

void someFunc(int aParam)
{
    int myLocalNum = 100;
    static int myStatic = 500;
    myStatic++;
    myLocalNum++;
    myGlobalDouble += 1;

    cout << "My local number (in someFunc) is " << myLocalNum << endl;
    cout << "The parameter is " << aParam << endl;
    cout << "My global double (in someFunc) is " << myGlobalDouble << endl;
    cout << "My static variable is " << myStatic << endl;
}

/*
    
    myGlobalDouble has global scope, and thus is available - and can be modified - everywhere. The
    lifetime of myGlobalDouble is the entire runtime of the program. (As long as the program
    is running, a global variable is "alive.)
    
    localToMain only has scope within main and is not visible elsewhere. If we tried
    to refer to it inside of someFunc, for example, we would get an error. localToMain has lifetime
    equal to the runtime of the program, but is local to main.
    
    myLocalNum only has scope within someFunc and thus is not accessible elsewhere. If we tried
    to refer to it inside of main, for example, we would get an error. The localToMain variable's 
    lifetime is just the runtime of each call of someFunc. It does not keep getting larger with
    each call of someFunc.

    myStatic is local to someFunc, but has lifetime equal to the entire runtime of the program.

*/