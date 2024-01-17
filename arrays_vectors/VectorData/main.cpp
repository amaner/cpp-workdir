#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector <int> myVec; // an integer vector
    int tmpNum = 0; // for keyboard input
    // priming read for our while loop
    // have the user input an integer
    cout << "Please enter an integer (non-neg to store, negative to end): " << endl;
    cin >> tmpNum;
    // if it's negative, we won't do anything
    // if it's non-negative, we'll push it onto the vector 
    while (tmpNum >= 0)
    {
        myVec.push_back(tmpNum);
        cout << "Please enter an integer (non-neg to store, negative to end): " << endl;
        cin >> tmpNum;
    }
    // loop will quit when a negative input is received
    // now print out the doubled values
    cout << "Here are your values, doubled: " << endl;
    for (int num : myVec)
    {
        cout << num * 2 << endl;
    }

    return 0;
}