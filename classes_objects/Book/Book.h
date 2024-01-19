#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

/* BOOK specification file */
// defines a class "Book"

class Book {

    public:
        // constructors
        Book();
        Book(string a, string t, string g, int np);
        // destructor
        ~Book();
        // getters
        string getAuthor() const;
        string getTitle() const;
        string getGenre() const;
        int getNumPages() const;
        // print
        void print() const;
    private:
        // properties
        string author;
        string title;
        string genre;
        int numPages;

};





#endif