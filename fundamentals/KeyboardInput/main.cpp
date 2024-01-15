#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    string fullName;

    cout << "Please enter your full name (first last): " << endl;
    getline(cin, fullName); // have to use getline because cin will break at first white space
    cout << "You entered: " << fullName << endl;

    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "You entered: " << age << endl;

    return 0;
}