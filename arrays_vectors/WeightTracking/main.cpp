#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    const int NUM_PEOPLE = 5; // total number of people
    vector <string> names; // vector to hold names
    vector <int> weights; // vector to hold weights
    string tmpName; // for keyboard input
    int tmpWeight; // for keyboard input

    for (int i=0; i<NUM_PEOPLE; i++)
    {   
        // get each person's name and weight
        cout << "Please enter a person's name: " << endl;
        getline(cin, tmpName);
        cout << "Please enter " << tmpName << "'s weight: " << endl;
        cin >> tmpWeight;
        cin.get(); // consume the newline character
        names.push_back(tmpName);
        weights.push_back(tmpWeight);
    }
    cout << "\n\n";
    // print out the names and weights
    for (int i=0; i<NUM_PEOPLE; i++)
    {
        cout << names[i] << " weighs " << weights[i] << "." << endl;
    }

    return 0;
}