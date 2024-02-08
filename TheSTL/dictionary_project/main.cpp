#include "Dictionary.h"
using namespace std;

// helper and UI functions
void printMenu(); // print the user input menu
void uiAddWord(Dictionary& dictionary); // add a word to a given dictionary
void uiGetDefinition(const Dictionary& dictionary); // get def from dictionary

int main()
{

    Dictionary theDict; // the dictionary we will use
    int choice; // integer for user choice

    // priming read
    printMenu(); // print the input menu
    cin >> choice; // grab user input
    cin.get(); // consume newline

    while (choice != 0) // 0 exits the program
    {
        if (choice == 1)
        {
            // user wants to add word/def pair
            uiAddWord(theDict);
        }
        else if (choice == 2)
        {
            // user wants to get a definition
            uiGetDefinition(theDict);
        }
        else if (choice == 3)
        {
            // user wants to print all current definitions
            theDict.printAll();
            cout << endl;
        }

        cout << endl;
        printMenu(); // set up next loop
        cin >> choice; // read user input
        cin.get(); // consume newline
    }

    // if we're here, user entered 0
    cout << "aaaand, we're done!" << endl;

    return 0;
}

void printMenu()
{
    cout << endl;
    cout << "Type your selection: " << endl;
    cout << "1 - Add a new word and definition" << endl;
    cout << "2 - Get the definition of a word" << endl;
    cout << "3 - Print all current definitions" << endl;
    cout << "0 - Exit the program" << endl;
    cout << endl;
}

void uiAddWord(Dictionary& dictionary)
{
    string word;
    string definition;
    cout << "Enter the word" << endl;
    getline(cin, word);
    cout << "Enter the definition for " << word << endl;
    getline(cin, definition);
    // member function does all the work here
    dictionary.addDefinition(word, definition);
}

void uiGetDefinition(const Dictionary& dictionary)
{
    string word;
    cout << "For which word do you want the definition?" << endl;
    getline(cin, word);
    // member function does all the work here
    cout << dictionary.getDefinition(word) << endl << endl;
}