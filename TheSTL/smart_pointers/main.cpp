#include <iostream>
#include <cstdlib>
#include <memory>

using namespace std;

int main()
{
    /*
    unique_ptr <double> myDubPtr(new double); 
    */
    // the above is how it would be done in versions 11 - 13
    // but from ver 14, this is recommended:
    unique_ptr<double> myDubPtr = make_unique<double>();
    *myDubPtr = 3.14; // dereference a smart ptr just as you would a raw ptr
    cout << "pointer value: " << *myDubPtr << endl;

    /* 
    Here's a fun thing to do. Let's create an array of unique pointers
    */
    const int ARR_SIZE = 5;
    auto myArray = make_unique<int []>(ARR_SIZE);
    for (int i=0; i<ARR_SIZE; i++)
    {
        myArray[i] = i * 2;
    }
    for (int i=0; i<ARR_SIZE; i++)
    {
        cout << myArray[i] << endl;
    }

    // let's illustrate what the "unique" means in the name unique_ptr
    // we use the move function to reassign ownership to another pointer
    // this nulls myDubPtr
    // also of note: I get an error without the std::, and still get
    // a warning with it. This has something to do with my libraries
    // on mac (instructor did not have this issue) but I was unable to resolve
    unique_ptr<double> otherPtr = std::move(myDubPtr);

    cout << "other pointer value: " << *otherPtr << endl;


    return 0;
}