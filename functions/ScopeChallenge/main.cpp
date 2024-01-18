#include <iostream>
using namespace std;

int counter = 0; // global integer

void modifyGlobal(); // function prototype

int main()
{

    cout << "counter before the loop of modifyGlobal: " << counter << endl;
    for (int i=0; i<100; i++)
    {
        modifyGlobal(); // keep incrementing the counter
    }
    cout << "counter after the loop: " << counter << endl;

    return 0;
}

void modifyGlobal()
{
    counter++;
}

/*
    This bit of code just illustrates the scope of a global variable.
*/