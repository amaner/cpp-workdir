#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(time(nullptr)); // seed the rand function

    int dieVal;
    for (int i=0; i<10; i++)
    {
        dieVal = rand() % 6 + 1;
        cout << dieVal << endl; // simulate rolling a six-sided die
    }

    return 0;
}