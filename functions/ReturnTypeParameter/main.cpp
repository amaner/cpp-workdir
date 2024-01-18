#include <iostream>
using namespace std;

/*
    return types -
         *  void functions do something but do not have an output that can be assigned to a variable
         *  functions with other return types (int, for example) do something but do have an output
            that can be assigned to a variable.
    arguments -
         * these are the actual values passed to a function at call/invocation
    parameters -
         * placeholders in the definition 
*/

void printHello(); // void parameterless function
void printNumber(int a); // void return with int parameter
int giveMe10(); // int value returning parameterless function
int addThese(int num1, int num2); // int value with two integer parameters
int square(int i); // returns the square of an integer

int main()
{
    int num1 = 120, num2 = 580; // numbers to pass to the addThese() function
   
    printHello(); // call printHello()
    
    printNumber(100); // call printNumber()
    
    int someData = giveMe10(); // store output of giveMe10() in a variable
    cout << someData << endl;  // print out the result
    
    int totalValue = addThese(num1, num2); // store output of addThese() in a variable
    cout << totalValue << endl; // print out the result

    printNumber(addThese(num1, 50)); // can pass the output of a function as input in a function

    printNumber(square(num1)); // print the square of the input
    
    return 0;
}

void printHello()
{
    cout << "Hello there." << endl;
}
void printNumber(int a) 
{
    cout << "The number is " << a << endl;
}
int giveMe10()
{
    return 10;
}
int addThese(int num1, int num2)
{
    return num1 + num2;
}
int square(int i)
{
    return i * i;
}