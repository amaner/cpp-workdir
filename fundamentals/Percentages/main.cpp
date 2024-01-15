#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullName, location;
    int initialScore;

    cout << "Please enter your full name (first last): " << endl;
    getline(cin, fullName); 

    cout << "Next, please enter your location (city, state/province, country): " << endl;
    getline(cin, location);

    cout << "Please enter an integer from 0 to 100: " << endl;
    cin >> initialScore;
    /*
        If we had elected to enter the integer first, we would then have to consume the
        newline character by using cin.get(); before the next geline() call.
    */

    cout << "Hello, " << fullName << ", we heard you are from " << location << "." << endl;
    cout << "Your original score is " << initialScore << ", but with 5 points added, " << endl;
    initialScore += 5;
    cout << "your new score is " << initialScore << endl;

    return 0;
}