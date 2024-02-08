#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{

    Rectangle rect1(10, 20);
    Rectangle rect2(50, 100);
    Rectangle rect3(10, 20);

    // let's test the equality test overload
    cout << "rect1 == rect3? " << boolalpha << (rect1 == rect3) << endl;

    // let's test our addition and assignment overloads
    // create a new rectangle by adding two together
    Rectangle resultRect = rect1 + rect2;
    cout << "resultRect length * width: " << resultRect.getLength() 
         << " * " << resultRect.getWidth() << endl;
    cout << " is " << resultRect.area() << endl;

    // now let's test our not equal overload
    cout << "rect1 != rect2? " << boolalpha << (rect1 != rect2) << endl;

    return 0;
}