#include <iostream>
#include <string>
using namespace std;

int main()
{

    int fixedCost, allotment, varCost;
    // fixedCost is the per month plan cost
    // allotment is the monthly base number of jams
    // varCost is the cost per extra jam, above the plan allotment    
    char memberPlan; // the plan to which user is subscribed
    int ordered; // how many they ordered this month
    int fee; // what they currently owe
    int aboveAllot; // extra above monthly allotment
    string errorMsg1 = "You ordered too few this month; please place additional order.";
    string errorMsg2 = "You entered an incorrect plan type.";

    cout << "To which plan do you currently subscribe? Enter A, B, or C: " << endl;
    cin >> memberPlan;
    cout << "How many jams, jellies, and/or preserves did you order this month?" << endl;
    cin >> ordered;

    switch (memberPlan)
    {
        case 'A':
        case 'a':
            fixedCost = 8;
            allotment = 2;
            varCost = 5;
            break;
        case 'B':
        case 'b':
            fixedCost = 12;
            allotment = 4;
            varCost = 4;
            break;
        case 'C':
        case 'c':
            fixedCost = 15;
            allotment = 6;
            varCost = 3;
        default:
            cout << errorMsg2 << endl;
            return 0;
    }
    aboveAllot = ordered - allotment;
    if (aboveAllot < 0) 
    {
        cout << errorMsg1 << endl;
        return 0;
    }
    fee = fixedCost + aboveAllot * varCost;
    cout << "Your monthly fee will be " << fee << endl;

    return 0;
}