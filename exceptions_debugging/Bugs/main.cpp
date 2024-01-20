#include <iostream>
#include <stdexcept>
using namespace std;

int imBroken(int n1, int n2);

int main()
{

    int a;

    a = imBroken(10, 5);

    cout << a << endl;

    try
    {
        a = imBroken(10, 0);
        cout << a << endl;
    }
    catch(const invalid_argument& e)
    {
        cout << e.what() << endl;
    }
    

    return 0;
}

int imBroken(int n1, int n2)
{
    int result = 0;

    if (n2 != 0)
    {
        result = n1/n2;
        // integer division - will truncate remainder
    }
    else
    {
        throw invalid_argument("cannot divide by 0");
    }

    return result;
}