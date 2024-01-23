#include <iostream>
#include "Circles.h"
using namespace std;

void printCircles(Circle ** circArray, int num);

int main()
{

    int numCircles;
    // prompt user for number of circles they wish to create
    cout << "How many circles would you like to create?" << endl;
    cin >> numCircles;
    // dynamically create memory for that many circles
    Circle ** myCircles = new Circle * [numCircles];
    for (int i=0; i<numCircles; i++)
    {
        int r;
        cout << "Circle # " << i << endl;
        cout << "What is the radius of this circle? " << endl;
        cin >> r;
        myCircles[i] = new Circle(r);
    }

    printCircles(myCircles, numCircles);

    for (int i=0; i<numCircles; i++)
    {
        delete myCircles[i];
        myCircles[i] = nullptr;
    }

    return 0;
}

void printCircles(Circle ** circArray, int num)
{
    for (int i=0; i<num; i++)
    {
        cout << "Circle " << i << endl;
        cout << "\t" << circArray[i]->getArea() << endl;
        cout << "\t" << circArray[i]->getCircumference() << endl;
    }

}