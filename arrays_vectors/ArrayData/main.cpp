#include <iostream>
#include <array>
using namespace std;

int main()
{
    // instantiate an integer array of length 5
    const int ARRAY_SIZE = 5;
    array <int, ARRAY_SIZE> nums{};
    // read in values from standard input
    for (int i = 0; i < nums.size(); i++)
    {
        cout << "Please enter the value to store in the " << i << " position: " << endl;
        cin >> nums[i];
    }
    // print out the new values, but doubled
    cout << "Your values, doubled, are: " << endl;
    for (int num : nums)
    {
        cout << num * 2 << endl;
    }

    return 0;
}