#include <iostream>
#include <string>
using namespace std;

int main()
{
    string outputString;

    for (int i=1; i<101; i++)
    {
        outputString = "";
        if (i % 3 == 0)
        {
            outputString += "fizz ";
        }
        if (i % 5 == 0)
        {
            outputString += "buzz";
        }
        cout << i << " " << outputString << endl;
    }

    return 0;
}