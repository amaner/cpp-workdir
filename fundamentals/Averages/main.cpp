#include <iostream>
using namespace std;

int main()
{
    double numOne, numTwo, numThree;

    cout << "Please enter a real number: " << endl;
    cin >> numOne;
    cout << "Please enter a second number: " << endl;
    cin >> numTwo;
    cout << "Please enter a third number: " << endl;
    cin >> numThree;
    cout << "The average is " << ((numOne + numTwo + numThree)/3) << endl;

    return 0;
}