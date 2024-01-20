#include <iostream>
#include <stdexcept>
using namespace std;

// some function prototypes
void processPositive(int num);
void doSomething(int num);

int main()
{

    int input;

    try
    {
        cout << "Enter a number to process: " << endl;
        cin >> input;
        doSomething(input);
        cout << "yay main was able to completely "
        << "process the num." << endl;
    }
    catch(invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    catch(out_of_range& e)
    {
        cout << e.what() << endl;
    }
    
    return 0;
}

/*
    main passes the input to doSomething, which passes it to processPositive, which passes control back
    to doSomething, when then passes control back to main

    in the event of a bad input value, main passes the number to doSomething, which then passes it to
    processPositive, which throws an error, which is then caught by doSomething, which then rethrows the
    error, which is then caught by main

*/

// our exception will originate here
void processPositive(int num)
{
    cout << "Welcome to the positive integer processor." << endl;
    if (num > 100)
    {
        throw out_of_range("Too large a number was passed.");
    }
    else if (num < 0)
    {
        throw invalid_argument("Negative number was passed");
    }
    else 
    {
        cout << "Good job. You passed a positive integer." << endl;
    }
}
// and this one will rethrow it
void doSomething(int num)
{
    try
    {
        processPositive(num);
        cout << "yay doSomething could process that number." << endl;
    }
    catch(const invalid_argument& e)
    {
        cout << "doSomething says the input was invalid." << endl;
        throw; // rethrow
    }
    catch(const out_of_range& e)
    {
        cout << "doSomething says the input was too large." << endl;
        throw; // rethrow
    }
    
}