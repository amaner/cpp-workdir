#include <iostream>
using namespace std;

int factorial(int num); // prototype

int main()
{
    
    int inputNum; 
    cout << "Please enter an integer > 1" << endl;
    cin >> inputNum;
    cout << "The factorial of 6 is " << factorial(inputNum) << endl;


    return 0;
}

int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1);
    }
    return num; // default case if num <= 1
}