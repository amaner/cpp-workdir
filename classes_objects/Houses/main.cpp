#include <iostream>
#include <string>
using namespace std;

class House {
    public:
        /* MEMBER FUNCTIONS*/
        // setters
        void setNumStories(int numStories)
        {
            this->numStories = numStories;
        }
        void setNumWindows(int numWindows)
        {
            this->numWindows = numWindows;
        }
        void setColor(string color)
        {
            this->color = color;
        }
        void setOwnership(string ownership)
        {
            this->ownership = ownership;
        }
        // getters
        // the const modifier ensures the method cannot alter the property
        // we're clearly not trying to, but imagine instead you wanted to return
        // the value incremented - the const modifier would be useful there
        int getNumStories() const
        {
            return numStories;
        }
        int getNumWindows() const
        {
            return numWindows;
        }
        string getColor() const
        {
            return color;
        }
        string getOwnership() const
        {
            return ownership;
        }
    private:
        /* PROPERTIES */
        // as they are private, they are not accessible elsewhere
        int numStories;
        int numWindows;
        string color;
        string ownership;
};

// prototype of a function that is called in main and
// prints out house properties
// we use const to ensure the function cannot call setters
// and we use the pass by reference for efficiency - it
// passes only the address rather than copying in all properties 
void printHouseData(const House& house);

int main()
{
    // declare house objects
    House House1;
    House House2;
    // set properties of myHouse
    House1.setNumStories(2);
    House1.setNumWindows(10);
    House1.setColor("green");
    House1.setOwnership("Andrew");
    // set properties of yourHouse
    House2.setNumStories(3);
    House2.setNumWindows(12);
    House2.setColor("blue");
    House2.setOwnership("Steve");

    // print the house properties
    printHouseData(House1);
    printHouseData(House2);
    
    return 0;
}

void printHouseData(const House& house)
{
    cout << house.getOwnership() << "'s house is " << house.getColor()
    << " and has " << house.getNumStories() << " stories and "
    << house.getNumWindows() << " windows." << endl;
}