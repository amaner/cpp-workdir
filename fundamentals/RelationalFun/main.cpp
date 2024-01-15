#include <iostream>
using namespace std;

/* 
    Relational operators
    > greater than
    >= greater than or equal to
    < less than
    <= less than or equal to
    == equal to (equality) - have to use double equal signs to compare and check equality
    != not equal to (also an equality operator)   
*/

int main() {
    cout << boolalpha; // sticky - set all bool output to alpha

    int a = 15, b = 20, age = 53;
    bool areEqual = a == b, atLeast21 = age >= 21;

    cout << "a is less than b evals to " << (a < b) << endl;
    cout << "a is equal to b evals to " << areEqual << endl;
    cout << "am I at least 21? " << atLeast21 << endl;

    return 0;
}