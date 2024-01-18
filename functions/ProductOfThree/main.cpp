#include <iostream>
using namespace std;

int multiply(int i, int j, int k); // prototype

int main()
{

    cout << "The solution is " << multiply(5, 7, 10) << endl;


    return 0;
}

int multiply(int i, int j, int k)
{

    return i * j * k;

}