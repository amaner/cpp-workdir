#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    bool isRaining = true;
    bool isWarm = false;

    cout << boolalpha;
    cout << "And:  " << (isRaining && isWarm) << endl;
    cout << "Or:  " << (isRaining || isWarm) << endl;
    cout << "Not:  " << (!isRaining) << endl;

    return 0;
}