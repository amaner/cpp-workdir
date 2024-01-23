#include <iostream>

using namespace std;

int main()
{

    const int ARR_SIZE = 5;
    int * myArray = new int[ARR_SIZE];
    // arrays are sequences of addresses
    // new returns the address of the first element
    // with dynamic memomry allocation, we can do this at runtime
    // which we'll do below
    for (int i=0; i<ARR_SIZE; i++)
    {
        myArray[i] = i * 2;
        cout << myArray[i] << endl;
    }
    delete[] myArray;

    // and now at runtime
    int arraySize;
    cout << "Please enter the size of the array you wish to allocate: " << endl;
    cin >> arraySize;
    int * myArray2 = new int[arraySize];
    for (int i=0; i<arraySize; i++)
    {
        myArray2[i] = 3 * i;
        cout << myArray2[i] << endl;
    }
    delete[] myArray2;

    return 0;
}