#include <iostream>
#include "Rectangle.h"
#include <array>
using namespace std;

int main()
{

    const int ARR_SIZE = 3;
    Rectangle* rectPtrs[ARR_SIZE];

    rectPtrs[0] = new Rectangle(23.1, 41.3);
    rectPtrs[1] = new Rectangle(3.7, 12.87);
    rectPtrs[2] = new Rectangle(4.5, 2.73);

    for (int i=0; i<ARR_SIZE; i++)
    {
        cout << "now dealing with rectangle # " << i << endl;
        cout << "area is : " << rectPtrs[i]->area() << endl;
        cout << "perimeter is : " << rectPtrs[i]->perimeter();
        cout << "now deleting rectangle # " << i << endl;
        delete rectPtrs[i];
        rectPtrs[i] = nullptr;
    }



    return 0;
}