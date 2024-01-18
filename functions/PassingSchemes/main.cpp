#include <iostream>
using namespace std;

void valChange1(int n);
void valChange2(int& n);
void threeTimesN(int input, int& output);

int main()
{

    int myNum = 20;
    cout << "Before valChange1 call, myNum is " << myNum << endl;
    valChange1(myNum);
    cout << "After valChange1 call, myNum is " << myNum << endl;
    // it didn't change - what to do?
    cout << endl << endl;
    // pass by reference
    cout << "Before valChange2 call, myNum is " << myNum << endl;
    valChange2(myNum);
    cout << "After valChange2 call, myNum is " << myNum << endl; 

    cout << endl << endl;
    int n1 = 20, n2;
    cout << "Before tripling, n1 is " << n1 << endl;
    threeTimesN(n1, n2);
    cout << "After tripling, n1 is " << n2 << endl;

    return 0;
}

void valChange1(int n)
{
    n = 100;
    cout << "Inside valChange1 function, n is " << n << endl;
}
void valChange2(int& n)
{
    n = 100;
    cout << "Inside valChange2 function, n is " << n << endl;
}
void threeTimesN(int input, int& output)
{
    output = 3 * input;
}

/*
    The difference between pass-by-reference and pass-by-value 
    is that modifications made to arguments passed in by reference 
    in the called function have effect in the calling function, 
    whereas modifications made to arguments passed in by value in 
    the called function can not affect the calling function. - IBM C++ reference

    It doesn't make sense - by the way - to pass numbers via reference, 
    only variables.
*/