#include <iostream>
using namespace std;

int main()
{

    char grade;
    
    cout << "Please enter a single letter grade: " << endl;
    cin >> grade;

    switch (grade)
    {
        case 'A':
        case 'a':
            cout << "Great job!" << endl;
            break;
        case 'B':
        case 'b':
            cout << "Good job." << endl;
            break;
        case 'C':
        case 'c':
            cout << "You can do better." << endl;
            break;
        case 'D':
        case 'd':
            cout << "You are getting close to failing the course." << endl;
            break;
        case 'F':
        case 'f':
            cout << "You are failing the course." << endl;
            break;
        default:
            cout << "You have entered an invalid grade." << endl;
    } // end switch

    return 0;
}