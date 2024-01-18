#include <iostream>
using namespace std;

void countDownFrom(int num); // prototype 1
int sumValues(int num); // prototype 2

int main() 
{

    countDownFrom(10); // base case

    int totalSum = sumValues(10);
    cout << "The sum is " << totalSum << endl;

    return 0;
}
// recursive function to count down from the given number to 0
void countDownFrom(int num)
{

    if (num >= 0)
    {
        cout << num << endl;
        countDownFrom(num - 1); // recursive case
    }
}
// recursive function to add up all numbers between 1 and the given number
int sumValues(int num)
{

    if (num >= 1)
    {
        return num + sumValues(num - 1);
    }

    return num; // default case for when num < 1
}