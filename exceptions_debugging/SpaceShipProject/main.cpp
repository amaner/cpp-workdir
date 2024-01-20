#include <iostream>
#include "WarpDriveOverheating.h"
using namespace std;

void warpTest(int temp);

int main()
{

    warpTest(65);
    warpTest(70);
    warpTest(75);

    try
    {
        warpTest(85);
    }
    catch(const WarpDriveOverheating& e)
    {
        cout << e.what() << endl;
    }
    

    return 0;
}

void warpTest(int temp)
{
    if (temp > 80)
    {
        throw WarpDriveOverheating();
    }
    // if we get here, temperature is safe
    cout << "At " << temp << "Celsius, the warp drive is operating within normal range." << endl;
}