#include <iostream>
using namespace std;

int main()
{

    // sequential statements
    int age = 53;
    cout << "Your age is " << age << endl;

    // selection statements - simple if else 
    if (age >= 16)
    {
        cout << "You can drive in the US." << endl;
    }
    else
    {
        cout << "You cannot yet drive in the US." << endl;
    }

    // repetition statement - simple for loop
    for (int i = 1; i <= age; i++)
    {
        cout << "Happy birthday " << i << endl;
    }

    return 0;
}