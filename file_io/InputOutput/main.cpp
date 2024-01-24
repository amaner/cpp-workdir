#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{

    // input streams
    ifstream nameFile, ageFile;
    // output stream
    ofstream outFile;
    // temp variables
    string name;
    int age;

    cout << "opening files..." << endl;
    nameFile.open("names.txt");
    ageFile.open("ages.txt");
    outFile.open("output.txt");

    if (!nameFile || !ageFile)
    {
        cout << "problem opening one of the files ... exiting" << endl;
        return 1; 
    }
    // read in data
    while (!nameFile.eof() && !ageFile.eof())
    {
        getline(nameFile, name);
        ageFile >> age;
        outFile << setw(20) << name << " " << setw(5) << age << endl;
    }

    nameFile.close();
    ageFile.close();
    outFile.close();

    return 0;
}