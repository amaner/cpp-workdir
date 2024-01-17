#include <iostream>
#include <string>
using namespace std;

int main()
{

    const int ARRAY_SIZE = 5; // constant for use in declaring array length
    int myArray[ARRAY_SIZE]; // allocate empty array with 5 available slots
    // fill int array entries
    myArray[0] = 15;
    myArray[1] = 20;
    myArray[2] = 22;
    myArray[3] = 13;
    myArray[4] = 6;
    // another way to declare and fill an array
    string names[4]{ "Bob", "Sally", "John", "Ed"};
    // spit out int array values
    for (int i=0; i<ARRAY_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }
    // spit out string array values
    for (int i=0; i<4; i++)
    {
        cout << names[i] << endl;
    }
    // and another way to iterate on an array
    // this is not a new type of for loop - rather, it is 
    // an example of syntactical sugar
    // could also use "auto" instead of the string declaration, telling
    // the compiler to "figure it out"
    for (string name : names)
    {
        cout << name << endl;
    }
    return 0;
}