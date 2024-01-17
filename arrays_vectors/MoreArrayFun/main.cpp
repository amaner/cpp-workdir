#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10;
    int numArray[ARRAY_SIZE]; // declare an integer array of length 10
    // fill the array using a for loop
    for (int i=0; i<10; i++)
    {
        numArray[i] = i + 1; // each value is one greater than the index
    }
    // using a range-based loop, spit out the values
    for (int num : numArray)
    {
        cout << num << endl;
    }
    return 0;
}