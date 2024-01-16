#include <iostream>
using namespace std;

int main() 
{

    // illustrating the use of the continue statement to skip over a specific iteration
    int count = 0;
    while (count < 10)
    {
        if (count == 5) 
        {
            count++;
            continue;
        } // this will skip over the printing of 5 
        cout << count << endl;
        count++;
    }

    // same but with a for loop
    for (int i=0; i<10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        cout << i << endl;
    }

    // break instead of continue
    for (int i=0; i<10; i++)
    {
        if (i == 5)
        {
            break;
        }
        cout << i << endl;
    }

    // print even integers using continue
    for (int i=0; i<=10; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            continue;
        }
    }
    return 0;
}