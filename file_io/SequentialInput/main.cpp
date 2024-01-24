#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{

    vector<int> vec; // a vector in which to store the numbers upon reading
    ifstream inFile;
    inFile.open("input.txt");

    int inputNum; // individual number from file
    int sum = 0;

    // read all numbers from a file
    // !inFile.eof is a sentinal control
    while (!inFile.eof())
    {

        inFile >> inputNum;
        vec.push_back(inputNum);
        sum += inputNum;

    }

    cout << "Here are the numbers read from file: " << endl;
    for (int num : vec)
    {
        cout << num << endl;
    }
    cout << "sum of numbers from file is: " << sum << endl;

    inFile.close();

    return 0;
}