#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    // create a string vector
    vector <string> names;
    // add to that vector the names of 5 family members
    names.push_back("Gary");
    names.push_back("Nancy");
    names.push_back("Melanie");
    names.push_back("Don");
    names.push_back("Myra");
    // now, insert my name as the third element in the vector
    names.insert(names.begin() + 2, "Andrew");
    // now, remove final entry in vector
    names.pop_back();
    // print the vector 
    for (string name : names)
    {
        cout << name << endl;
    }

    return 0;
}
