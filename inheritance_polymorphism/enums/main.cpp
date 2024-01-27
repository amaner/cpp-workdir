#include <iostream>
using namespace std;

int main()
{

    enum Direction { UP, DOWN, LEFT, RIGHT, STANDING};
    // since these are constants, we are using uppercase
    // these named constants get integer values - their positions
    // in the struct (UP = 0, DOWN = 1, etc.)
    // as can be seen by printing them out directly

    // declare some directions
    Direction dir1 = UP;
    Direction dir2 = DOWN;
    Direction dir3 = LEFT;
    Direction dir4 = RIGHT;
    // print them out, which results in 0, 1, 2, 3
    cout << dir1 << endl << dir2 << endl << dir3 << endl << dir4 << endl;
    // but they could be used in control structures, for instance...
    // imagine determining which direction a player character is traveling
    Direction dir5 = STANDING;
    switch (dir5)
    {
        case UP:
            cout << "up!" << endl;
            break;
        case DOWN:
            cout << "down!" << endl;
            break;
        case LEFT:
            cout << "left!" << endl;
            break;
        case RIGHT:
            cout << "right!" << endl;
            break;
        case STANDING:
            cout << "standing still!" << endl;
            break;
        default :
            cout << "whoopsie!" << endl;
            break;
    }


    return 0;
}