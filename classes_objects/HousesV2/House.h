#ifndef HOUSE_H
#define HOUSE_H

#include <string>
using namespace std;

/* HOUSE specification file */
// defines a class "house"
class House {
    public:
        /* CONSTRUCTOR & DESTRUCTOR */
        // basic destructor
        ~House();
        // basic constructor
        House();
        // parameterized constructor
        House(string color, string ownership, int numStories, int numWindows);

        /* MEMBER FUNCTIONS*/
        // setters
        void setNumStories(int numStories); // sets number of stories
        void setNumWindows(int numWindows); // sets number of windows
        void setColor(string color); // sets color of house
        void setOwnership(string ownership); // sets owner
        // getters
        // the const modifier ensures the method cannot alter the property
        // we're clearly not trying to, but imagine instead you wanted to return
        // the value incremented - the const modifier would be useful there
        int getNumStories() const; // get number of stories
        int getNumWindows() const; // get number of windows
        string getColor() const;   // get color of house
        string getOwnership() const; // get owner
        // general
        void print() const;

    private:
        /* PROPERTIES */
        // as they are private, they are not accessible elsewhere
        int numStories;
        int numWindows;
        string color;
        string ownership;
};

#endif