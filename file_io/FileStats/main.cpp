#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int minPoss = 0;    // minimum allowable score is 0
    int maxPoss = 100;  // maximum allowable score is 100
    int min = 100, max = 0;
    double ave = 0.0;
    int tmp, count = 0;
    ifstream inFile;    // file containing a list of scores

    inFile.open("scores.txt");

    while (!inFile.eof())
    {

        inFile >> tmp;
        if (tmp >= minPoss && tmp <= maxPoss)
        {
            // do work
            if (tmp < min)
            {
                min = tmp;
            }
            if (tmp > max)
            {
                max = tmp;
            }
            ave += tmp;
            count++;
        }
    }

    inFile.close();
    ave = ave / count;

    cout << "The maximum legit score was: " << max << endl;
    cout << "The minimum legit score was: " << min << endl;
    cout << "And, the average legit score was: " << setprecision(5) << ave << endl;

    return 0;
}