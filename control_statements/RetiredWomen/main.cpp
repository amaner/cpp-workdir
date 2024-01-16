#include <iostream>
using namespace std;

int main()
{
    // prompt user for age (int) and sex (char)
    // if age is >= 60 AND sex is 'f' or 'F',
    // the user qualifies for the senior women discout
    // otherwise the user does not
    int age;
    char sex;

    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Now, please enter your sex (lower or uppercase): " << endl;
    cin >> sex;

    if (age >= 60 && (sex == 'f' || sex == 'F'))
    { 
        cout << "You qualify for the discount!" << endl;
    }
    else
    {
        cout << "I'm sorry, you do not qualify for the discount." << endl;
    }

    return 0;
}