#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

// constructors
Book::Book()
{
    this->author = "undefined";
    this->title = "undefined";
    this->genre = "undefined";
    this->numPages = 0;
    cout << "Created a book with no known title." << endl;
}
Book::Book(string a, string t, string g, int np)
{
    this->author = a;
    this->title = t;
    this->genre = g;
    this->numPages = np;
    cout << "Created a book with title " << t << "." << endl;
}
// destructor
Book::~Book()
{
    cout << "The book titled " << title << " is being destroyed!" << endl;
}
// getters
string Book::getAuthor() const
{
    return this->author;
}
string Book::getTitle() const
{
    return this->title;
}
string Book::getGenre() const
{
    return this->genre;
}
int Book::getNumPages() const
{
    return this->numPages;
}
// print properties
void Book::print() const
{
    cout << "The book titled " << this->title << " was written by " << this->author
    << ", has genre " << this->genre << ", and has " << this->numPages << " pages." << endl;
}