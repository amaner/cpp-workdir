#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> twiceNums{}; // instantiate an integer array of length 10
    // fill the array, taking advantage of the size() method for loop control
    for (int i = 0; i < twiceNums.size(); i++)
    {
        twiceNums[i] = 2 * i; // multiples of 2
    }
    // use range-based loop to confirm we have the right values
    for (int num : twiceNums)
    {
        cout << num << endl;
    }
    cout << "\nArray length is " << twiceNums.size() << endl;
    return 0;
}