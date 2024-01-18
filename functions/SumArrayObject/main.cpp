#include <iostream>
#include <array>
using namespace std;

const int ARRAY_SIZE = 10;

int sumArray(array<int, ARRAY_SIZE> a); // prototype 1
void sumArray(array<int, ARRAY_SIZE> a, int& n); // prototype 2

int main()
{

    array < int, ARRAY_SIZE > ar = {1, 1, 2, 3, 5, 8, 13, 21, 34, 55};
    int output = sumArray(ar);
    cout << "The total sum is " << output << endl;
    cout << endl << endl;

    int sum = 0;
    sumArray(ar, sum);
    cout << "The total sum using pass by reference is " << sum << endl;

    return 0;
}
// function that returns the sum of the elements of an array object
int sumArray(array<int, ARRAY_SIZE> a){

    int sum = 0;
    for (int element : a)
    {
        sum += element;
    }
    return sum;
}
// overload of previous function - this time taking the array and the variable
// in which to store the sum - void function that modifies sum variable using 
// pass by reference
void sumArray(array<int, ARRAY_SIZE> a, int& n)
{
    for (int element : a)
    {
        n += element;
    }
}