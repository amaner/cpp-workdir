#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    ifstream inFile; // shopping list
    vector<string> shoppingList; // to contain unique shopping list entries
    vector<int> frequencies; // to contain counts of items in the list
    string tmpItem; // for reading
    int tmpIndex = 1; // helper integer

    inFile.open("shopping.txt"); // open input file
    if (!inFile)
    {
        cout << "unable to open file - quitting" << endl;
        return 1;
    }
    while (!inFile.eof())
    {

        inFile >> tmpItem; // read in the string
        auto it = find(shoppingList.begin(), shoppingList.end(), tmpItem); // see if it's in the existing list
        if (it != shoppingList.end()) // if it's already in the list
        {   // increment that item's frequency in the parallel vector
            frequencies[distance(shoppingList.begin(), it)]++; // increment that item's frequency
        }
        else
        {
            shoppingList.push_back(tmpItem); // push the item on the back of the list
            frequencies.push_back(tmpIndex); // and create a frequency element for that item, set = 1
        }

    }
    inFile.close(); // close the input file
    for (int i=0; i<shoppingList.size(); i++)
    {
        cout << shoppingList[i] << " " << frequencies[i] << endl;
    }

    return 0;
}