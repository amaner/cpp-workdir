#include <iostream>
#include "Rectangle.h"
#include <fstream>
#include <vector>
using namespace std;

int main()
{ 
    
    vector<Rectangle *> rectVect; // a vector to contain pointers to several rectangle objects
    int tmpL, tmpW; // to store length and width as we read them
    ifstream inFile; // input file containing dimensions
    ofstream outFile; // output file to which we will write calculation results

    // open the files
    inFile.open("rectangles.txt");
    outFile.open("output.txt");

    // read in the dimensions and dynamically allocate rectangles
    while (!inFile.eof())
    {
        inFile >> tmpL;
        inFile >> tmpW;
        rectVect.push_back(new Rectangle(tmpL, tmpW));
    }

    for (Rectangle* rect : rectVect)
    {
        outFile << rect->area() << " " << rect->perimeter() << endl;
        delete rect;
        rect = nullptr;
    }
    inFile.close();
    outFile.close();

    return 0;
}