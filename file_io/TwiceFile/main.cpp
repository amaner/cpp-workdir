#include <iostream>
#include <fstream>

using namespace std;


int main()
{

    ifstream inFile;
    ofstream outFile;
    int num;

    cout << "opening files..." << endl;
    inFile.open("input.txt");
    outFile.open("output.txt");

    while (!inFile.eof())
    {
        inFile >> num;
        cout << "number read in: " << num << endl;
        num *= 2;
        cout << "doubled: " << num << endl;
        outFile << num << endl;
    }
    cout << "closing files..." << endl;
    inFile.close();
    outFile.close();

    return 0;
}