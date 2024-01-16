#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Welcome to the Pub and Grille." << endl;
    cout << "What is your age?" << endl;
    cin >> age;

    if (age >= 21)
    {
        cout << "Here, have a beer." << endl;
    }
    else if (age >= 16 && age < 21)
    {
        cout << "Here, have a coke." << endl;
        cout << "And, at least you can drive." << endl;
    }
    else // person is < 16
    {
        cout << "Here, have a coke." << endl;
    }

    cout << "Thanks for coming to the Pub and Grille" << endl;
    
    return 0;
}