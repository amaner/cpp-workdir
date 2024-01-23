#include <iostream>
using namespace std;

int main()
{

    int myInt = 150;
    double myDouble = 3.14159;
    int * intPtr = &myInt; // * declares it as a pointer, and & is a reference to the int
    double * doublePtr = &myDouble;

    cout << "my integer is originally: " << myInt << endl;
    cout << "pointer holds value: " << intPtr << endl; // this will return the mem address in hex
    cout << "pointer dereferenced: " << *intPtr << endl; // this will return the integer value
    // * acts as a unary operator and goes to the memory address and returns the value stored there

    *intPtr = 200; // since *intPtr points to myInt, this actually changes the value of myInt
    // this is because intPtr holds the memory address of myInt
    // since the = is on the right side, we're changing the value stored inside the mem address

    cout << "my integer is now: " << myInt << endl;

    cout << "and now the double part: " << endl;

    cout << "actual contents of doublePtr: " << doublePtr << endl;
    cout << "the value to which it points: " << *doublePtr << endl;

    return 0;
}