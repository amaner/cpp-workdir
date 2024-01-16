#include <iostream>
using namespace std;

int main()
{
    // illustrating a while loop - a pre-test loop
    int count = 0; // init count
    while (count < 10) // condition
    {
        cout << count << endl;
        count++; // increment count
    }

    // illustrating a do while loop - a post-test loop
    int count2 = 0;
    do 
    {
        cout << count2 << endl;
        count2++;
    } while (count2 < 10) ;
    // worth noting here that the do while loop will evaluate at least once
    // even if the condition is false at the outset - for example, it
    // would print out 10 and stop if we initialized count2 to 10
    
    // illustrating the same, but as a for loop
    for (int i=0; i<10; i++)
    {
        cout << i << endl;
    }
    
    // the above have all been counter-based loops
    // we'll next look at a sentinel-based loop
    int input, sum = 0;
    cout << "Please enter a non-negative integer to continue, or a negative " << 
    "integer if you wish to quit." << endl;
    cin >> input;
    while (input >= 0)
    {
        sum += input;
        cout << "Please enter a non-negative integer to continue, or a negative " << 
        "integer if you wish to quit." << endl;
        cin >> input;
    }
    cout << "The sum of the numbers is " << sum << endl;
    
    return 0;
}