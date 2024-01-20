#include <iostream>
#include <stdexcept>
#include "AngryCatException.h"

using namespace std;

void feedKitty(int numTreats);

int main()
{

    int numTreats = 0;

    cout << "How many treats do you want to feed kitty?" << endl;
    cin >> numTreats;

    try
    {
        feedKitty(numTreats);
    }
    catch(const AngryCatException& e)
    {
        cout << e.what() << endl;
    } 
    // because AngryCatException inherits from runtime_error, we would need to 
    // catch any general runtime errors after this one, or else AngryCatException
    // would never be reached
    

    return 0;
}

void feedKitty(int numTreats)
{
    if (numTreats < 3)
    {
        throw AngryCatException();
    }
    else if (numTreats < 6)
    {
        throw AngryCatException("I'm still not totally happy!");
    }
    // if we get past this point, kitty is happy
    cout << "Kitty is happy with " << numTreats << " treats." << endl;
}