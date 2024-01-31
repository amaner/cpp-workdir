#include <iostream>
#include <string>
#include "swapper.h"
using namespace std;


// suppose we wanted to write a function to compare two variables of the same type
// and the test would be to simply determine which was bigger
// further, suppose we wanted to do this for multiple data types
// prior to this point, we would have simply used overloading to write
// multiple versions of the same function - each using precisely the
// same code - not a good idea

// let's do this instead
template <class T>
T getBigger(T a, T b);

template <class T>
T getSmaller(T a, T b);

int main()
{
    // to illustrate simple function template concepts
    string name1 = "John";
    string name2 = "Alice";
    double bigDouble = getBigger(3.14, 5.55);
    int bigInt = getBigger(11, 9);
    string bigString = getBigger(name1, name2);
    double lilDouble = getSmaller(3.14, 5.55);
    int smallInt = getSmaller(11, 9);
    string smallString = getSmaller(name1, name2);

    cout << "bigger double = " << bigDouble << endl;
    cout << "bigger int = " << bigInt << endl;
    cout << "bigger string = " << bigString << endl;
    cout << "smaller double = " << lilDouble << endl;
    cout << "smaller int = " << smallInt << endl;
    cout << "smaller string = " << smallString << endl;
    cout << endl << endl;

    // now to test our class template
    // first initialize a couple different versions of swapper
    Swapper<int> intSwapper(5, 10);
    Swapper<string> stringSwapper("John", "Bob");

    cout << "testing the swapper: " << endl;
    cout << "before the swap - " << endl;
    cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
    cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;
    intSwapper.swap();
    stringSwapper.swap();
    cout << "after the swap - " << endl;
    cout << intSwapper.getFirst() << " " << intSwapper.getSecond() << endl;
    cout << stringSwapper.getFirst() << " " << stringSwapper.getSecond() << endl;

    return 0;
}

// we'll use a template
// this is a simple example of DRY code - we should not repeat ourselves
// when we can avoid it
template <class T>
T getBigger(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}

template <class T>
T getSmaller(T a, T b)
{
    if (a < b)
    {
        return a;
    }
    return b;
}