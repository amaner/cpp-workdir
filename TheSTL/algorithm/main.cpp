#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

void fillVector(vector<int>& myVector);
void printVector(const vector<int>& myVector);
void countFives(const vector<int>& myVector);



int main()
{

    vector <int> myVector;

    fillVector(myVector);
    // sort is part of the algorithm library, and simply
    // sorts a vector in order
    sort(myVector.begin(), myVector.end());
    printVector(myVector);
    countFives(myVector);

    cout << endl << "replacing 5s with 99s..." << endl;
    // replace takes starting and ending iterators, the element
    // to be replaced, and the element with which you want it replaced
    replace(myVector.begin(), myVector.end(), 5, 99);
    sort(myVector.begin(), myVector.end());
    countFives(myVector);
    printVector(myVector);

    return 0;
}

// fillVector will fill a vector with 20 random numbers
// ranging from 1 to 5
void fillVector(vector <int>& myVector)
{
    // seed rng
    srand(time(nullptr));
    int tmp;
    for (int i=0; i<20; i++)
    {
        tmp = rand() %5 + 1; // [1 - 5]
        myVector.push_back(tmp);
    }
}

// this just prints out the contents of our vector
void printVector(const vector <int>& myVector)
{
    for (int elem : myVector)
    {
        cout << elem << endl;
    }
}

// this will count the # of 5s in our vector
void countFives(const vector <int>& myVector)
{
    // count is part of the algorithm library
    // it counts the appearances of the target within the specified 
    // range (it takes starting and ending iterators)
    int numFives = count(myVector.begin(), myVector.end(), 5);
    cout << "number of 5s: " << numFives << endl;
}