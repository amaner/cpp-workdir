#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

int main()
{

    vector<string> names(5);

    names.at(0) = "John";
    names.at(1) = "Bob";
    names.at(2) = "Sally";
    names.at(3) = "Karen";
    names.at(4) = "Andrew";

    for (string name : names)
    {
        cout << name << endl;
    }

    // all of the above will work fine, but if we try to access 
    // slot 5, we crash
    // names.at(5) = "Tyler";
    // in debugging mode this gave us an out of range error - good!

    try
    {
        names.at(5) = "Tyler";
        // try to access this block
    }
    catch(const out_of_range& e)
    {
        // which is caught by the error handler
        // and we get an informative message
        cout << e.what() << endl;
        // weirdly, on Windows I got "invalid vector subscript" - very informative
        // but on Mac I got "vector" - not so useful
    }
    

    return 0;
}