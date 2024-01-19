#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{

    Rectangle Rect1(20.3, 13.4);
    Rectangle Rect2(14.5, 18.9);
  
    Rect1.print();
    cout << "Its area is " << Rect1.area() << ", and its perimeter is " << Rect1.perimeter() << "." << endl;
    Rect2.print();
    cout << "Its area is " << Rect2.area() << ", and its perimeter is " << Rect2.perimeter() << "." << endl;




    return 0;
}
