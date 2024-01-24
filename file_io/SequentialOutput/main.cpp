#include <iostream>
#include <fstream>

using namespace std;

void printFormatted(ofstream &of, int lines);

int main()
{

    ofstream outFile; // an output file
    int numLoops; // for user input

    cout << "How many rows do you wish to write to file?" << endl;
    cin >> numLoops;

    cout << "Opening output file." << endl;
    outFile.open("output.txt"); // open the file

    printFormatted(outFile, numLoops);    

    outFile.close(); // close the file
    cout << "Finished writing." << endl;


    return 0;
}

void printFormatted(ofstream &of, int lines)
{

    of << fixed << showpoint;
    cout << fixed << showpoint;
    // std::fixed makes the output stream display exactly as many digits as specified in setprecision()
    // std::showpoint forces the stream to display a decimal point, even when the decimal portion is 0

    for (int i=1; i<=lines; i++) 
    {
        of << setw(12) << i << setw(12) << setprecision(2) << (i * 5.7575)
        << setw(12) << setprecision(3) << (i * 3.14159) << endl;

        cout << setw(12) << i << setw(12) << setprecision(2) << (i * 5.7575)
        << setw(12) << setprecision(3) << (i * 3.14159) << endl;
    }
}