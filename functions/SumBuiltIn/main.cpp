#include <iostream>
using namespace std;

int sumArray(int param[], int size) ;

int main()
{

    const int ARRAY_SIZE = 10;
    int myNums[ARRAY_SIZE] = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int output = sumArray(myNums, ARRAY_SIZE);
    cout << "The total sum is " << output << endl;

    return 0;
}
// function takes an integer array and its size as input
// then returns the sum of the elements
int sumArray(int param[], int size)
{
    int tmpNum = 0;
    for (int i=0; i<size; i++)
    {
        tmpNum += param[i];
    }
    return tmpNum;
}