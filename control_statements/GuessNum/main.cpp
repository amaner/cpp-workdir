#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{

    srand(time(nullptr)); // seed the random num generator
    int randNum = rand() % 100 + 1; // a random number between 1 and 100
    bool guessedCorrect = false; // a boolean to control the flow
    int guesses = 0; // number of user guesses
    int guess = 0; // the user's current guess
    while (!guessedCorrect)
    {
        cout << "Enter your guess for an integer between 1 and 100: " << endl;
        cin >> guess;
        guesses++; // increment the number of guesses
        if (guess < randNum) // guess was low
        {
            cout << "Your guess was too low. Please try again!" << endl;
        }
        else if (guess > randNum) // guess was high
        {
            cout << "Your guess was too high. Please try again!" << endl;
        }
        else // guess was correct
        {
            guessedCorrect = true;
            cout << "You guessed correctly! The correct number is " << randNum << endl;
        }
    }
    return 0;
}