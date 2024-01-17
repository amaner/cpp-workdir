#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    vector <int> myVec1; // instantiating an integer vector of indeterminate length
    vector <string> myVec2(3); // instantiating a string vector of length 3
    // pushing values onto the first vector
    cout << "Filling the integer vector with values ..." << endl;
    myVec1.push_back(1); 
    myVec1.push_back(2);
    myVec1.push_back(3);
    // now the size should be 3, since we pushed 3 values onto the first vector
    cout << "myVec1 size is: " << myVec1.size() << endl;
    // spit out the integer vector values
    for (int val : myVec1)
    {
        cout << val << endl;
    }
    // fill values of the second vector using indices, rather than push_back() method
    cout << "Filling string vector with values ..." << endl;
    myVec2[0] = "John";
    myVec2[1] = "Bob";
    myVec2[2] = "Sally";
    // push another value onto the second vector, which dynamically resizes it to length 4
    myVec2.push_back("Shannon");
    cout << "myVec2 size is: " << myVec2.size() << endl;
    // spit out the string vector values
    for (string name : myVec2)
    {
        cout << name << endl;
    }
    // so, vectors are just like arrays, but they can be dynamically resized 
    // arrays are static

    // now let's illustrate the use of some built-in methods
    cout << "String vector's front and back: " << endl;
    cout << "front: " << myVec2.front() << endl;
    cout << "back: " << myVec2.back() << endl;
    // front() and back() retrieve the first and last values
    // remove the last value from the string vector so it begins with John and ends with Sally
    cout << "Popping final value out of the string vector..." << endl;
    myVec2.pop_back(); 
    // now use insert() to place a new value into the vector
    // insert() takes two arguments: an iterator to determine location, and a value to be inserted
    cout << "Inserting a new value at beginning of the string vector..." << endl;
    myVec2.insert(myVec2.begin(), "Don");
    // now it begings with Don and ends with Sally, and is of length 4
    cout << "now, front is: " << myVec2.front() << endl;
    cout << "now, back is: " << myVec2.back() << endl;
    return 0;
}