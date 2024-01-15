#include <iostream>
using namespace std;

int main() {
    int myNum = 10; // declare and instantiate myNum
    cout << "Initial value of myNum is " << myNum << endl;
    myNum += 5; // add 5
    myNum *= 2; // double result
    myNum *= 2; // double again
    myNum *= 2; // and again

    cout << "After adding 5 and then doubling three times, the new value is " << myNum << endl;

    return 0;
}