#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();
void noChange(const double * const someDouble);

int main()
{

    noConst();

    cp2ncd();

    ncp2cd();

    cp2cd();

    // instructor challenge
    double * someNum = new double(3.14159);

    noChange(someNum);

    delete someNum;
    someNum = nullptr;


    return 0;
}

// neither is a constant so both can be changed
void noConst()
{

    cout << "In noConst" << endl;
    // create pointer to integer 50
    int * intPtr = new int(50);

    cout << "\toriginal value : " << *intPtr << endl;
    // dereference and now store 100 in the memory slot
    *intPtr = 100;
    cout << "\t changed data : " << *intPtr << endl;
    // free up the memory - but do not set to nullptr
    delete intPtr;
    // reallocate the memory and point to integer 125
    intPtr = new int(125);
    cout << "\t new integer entirely : " << *intPtr << endl;

    delete intPtr;

}

// pointer is constant - cannot be changed
// data is non-constant - can be changed
void cp2ncd()
{
    
    cout << "In cp2ncd" << endl;
    // declare constant pointer and point to 100 
    // the value stored in the spot can be changed
    // but we cannot realloc like before
    int * const intPtr = new int(100);

    cout << "\t original value : " << *intPtr << endl;
    // change data in memory slot
    *intPtr = 250;

    cout << "\t new integer value : " << *intPtr << endl;
    // free up memory
    delete intPtr;

    // intPtr = new int(222);
    // above will not work - we get an 'lvalue' error under intPtr
    // because
    // we declared the pointer to be constant
    // commented out 
}

// pointer can be changed
// but data cannot be changed
void ncp2cd()
{

    cout << "In ncp2cd" << endl;

    // reading right to left
    // putting const first means the data must
    // be constant, not the pointer
    const int * intPtr = new int(500);

    cout << "\t original value : " << *intPtr << endl;
    
    delete intPtr;

    intPtr = new int(100); // this is okay

    // but this is not
    // *intPtr = 1500;
    // the above generates an lvalue error under the asterisk
    // because the pointer is constant

    delete intPtr;

}

// pointer is constant
// data is also constant
void cp2cd()
{

    const int * const intPtr = new int(5000);
    // the above is fine - the two const uses ensure both components are constant

    cout << "Inside cp2cd" << endl;
    cout << "\t original value : " << *intPtr << endl;

    // no changes allowed
    // *intPtr = 1212;
    // above generates lvalue error under asterisk
    // intPtr = new int(1212);
    // above generates lvalue error under var name

    delete intPtr;
}

void noChange(const double * const someNum)
{

    cout << "In noChange" << endl;
    cout << "\t passed double value : " << *someNum << endl;
}