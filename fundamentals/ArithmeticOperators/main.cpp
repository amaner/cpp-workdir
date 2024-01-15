
/* 
    Arithmetic operators
    + addition
    - subtraction
    * multiplication
    / division
    % modulus
*/

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 3;
    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    int quotient = a / b;
    int remainder = a % b;
    int result = 10;
    int myInt = 5;

    result += 15; // shorthand for result = result = 15

    cout << "sum is " << sum << endl;
    cout << "difference is " << difference << endl;
    cout << "product is " << product << endl;
    cout << "quotient is " << quotient << endl;
    cout << "remainder is " << remainder << endl;
    cout << "result is " << result << endl;
    cout << "myInt is " << myInt << endl;
    myInt++; // increment by 1
    cout << "myInt is now " << myInt << endl;
    myInt--; // decrement by 1
    cout << "myInt is now back to " << myInt << endl;
    myInt *= 3;
    cout << "it's now tripled: " << myInt << endl;

    return 0;
}