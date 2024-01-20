#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

char getLetterGrade(int g);

int main()
{

    int grade; 
    char letterGrade;

    cout << "Please enter your grade as an integer, between 0 and 100, inclusive: " << endl;
    cin >> grade;

    try
    {
        letterGrade = getLetterGrade(grade);
        cout << "Your letter grade is: " << letterGrade << endl;
    }
    catch(const out_of_range& e)
    {
        cout << e.what() << endl;
    }
    

    return 0;
}

char getLetterGrade(int g)
{

    char result;

    if (g >= 0 && g < 60)
    {
        result = 'F';
    }
    else if (g >= 60 && g < 70)
    {
        result = 'D';
    }
    else if (g >= 70 && g < 80)
    {
        result = 'C';
    }
    else if (g >= 80 && g < 90)
    {
        result = 'B';
    }
    else if (g >= 90 && g <= 100)
    {
        result = 'A';
    }
    else
    {
        throw out_of_range("your grade must be between 0 and 100, inclusive");
    }
    // if we reach this point we have a valid return value
    return result;
}