#include <iostream>

using namespace std;

int main()
{

    int * intPtr = new int;
    // in this case we dynamically allocate the space for a single integer

    cout << "The mem address before dereferincing is: " << intPtr << endl;

    *intPtr = 123;
    // dereferencing it to fill the address with an integer value

    cout << "The value is now: " << *intPtr << endl;

    delete intPtr;
    // return the allocated memory back to the heap

    intPtr = nullptr;
    // not necessary at this point but good practice
    // intPtr still holds an address, but it is invalid
    // setting it to nullptr references memory at location 0
    // prior to CPP11, people used NULL or 0
    // setting to nullptr avoids "dangling pointer" or mem leak

    // instructor challenge:
    bool * boolPtr = new bool;
    *boolPtr = true;
    // print out the value to which it points
    cout << boolalpha << *boolPtr << endl;
    delete boolPtr;
    boolPtr = nullptr;



    return 0;
}