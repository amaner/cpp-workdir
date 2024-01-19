#include "Book.h"
using namespace std;

int main()
{

    Book gameOfThrones1("George RR Martin", "A Game of Thrones", "Fantasy", 720);
    Book gameOfThrones2("George RR Martin", "A Clash of Kings", "Fantasy", 784);
    Book eMagBook("John D Jackson", "Classical Electrodynamics", "Science : Non-Fiction", 832);
    Book mathBook("Walter Rudin", "Principles of Mathematial Analysis", "Math : Non-Fiction", 342);

    gameOfThrones1.print();
    gameOfThrones2.print();
    eMagBook.print();
    mathBook.print();


    return 0;
}