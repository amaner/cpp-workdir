#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // this exercise will use some built-in c math functions
    int powResult = pow(2,3); // 2^3 power
    int sqrtResult = sqrt(25); // root 25
    int ceilResult = ceil(3.14159); // ceiling of pi
    int floorResult = floor(3.14159); // floor of pi
    int powOf2 = log2(512); // binary log of 512

    cout << "2 cubed is " << powResult << endl;
    cout << "square root of 25 is " << sqrtResult << endl;
    cout << "ceiling of pi is " << ceilResult << endl;
    cout << "floor of pi is " << floorResult << endl;
    cout << "to which power would we raise 2 to get 512? answer: " << powOf2 << endl;


    return 0;
}

/*

    refer to https://cplusplus.com/reference/cmath/ for more on the C math lib

*/