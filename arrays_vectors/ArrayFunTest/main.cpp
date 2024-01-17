#include <iostream>
#include <array>
using namespace std;

int main()
{
    // declare an array object
    // type int, length 5
    // initialize all values to 0 using empty braces
    array<int, 5> myIntArray{};
    // fill array the hard way
    myIntArray[0] = 2;
    myIntArray[1] = 5;
    myIntArray[2] = 10;
    myIntArray[3] = 1;
    myIntArray[4] = 17;
    // spit out array values
    for (int a : myIntArray)
    {
        cout << a << endl;
    }
    // use the size() method to spit out the array length
    cout << "\nSize of array: " << myIntArray.size() << endl;

    return 0;
}