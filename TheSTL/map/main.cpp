#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{

    map <string, string> contacts;

    // maps are key value pairs
    contacts["John Baugh"] = "313-555-5555";
    contacts["Bob Robinson"] = "734-555-5050";
    contacts["Sally Snorkle"] = "810-555-8888";

    // for (pair<string, string> element : contacts)
    for (auto element : contacts) // auto lets the compiler figure out the correct type(s)
    {
        // first yields the first string while second yields the second
        cout << element.first << " = " << element.second << endl;
    }



    return 0;
}