#include <iostream>
#include <string>
using namespace std;

int getResult(int num1, int num2);
string getResult(string str1, string str2);
int getResult(int num1);

int main()
{

    int resultNum = getResult(30, 20);
    string nameResult = getResult("Andrew", "Maner");
    int resultNum2 = getResult(10);

    cout << "the result num is " << resultNum << endl;
    cout << "the result string is " << nameResult << endl;
    cout << "the result cube is " << resultNum2 << endl;

    return 0;
}

int getResult(int num1, int num2)
{
    return num1 * num2;
}
// an overload of getResult
string getResult(string str1, string str2)
{
    return str1 + " " + str2;
}
// another overload
int getResult(int num1)
{
    return num1 * num1 * num1;
}
/*
    Name and parameters together form the "signature" of the function.
    The return type distinguishes between the overloads. Here, one is of type 
    int and the other is of type string.
*/