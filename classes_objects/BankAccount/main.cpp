#include "BankAccount.h"
#include <iostream>

int main()
{

    BankAccount account1("Andrew Maner", 10000);
    cout << account1.getOwner() << "'s " << " account with balance $" << account1.getBalance() 
         << " has been created." << endl;
        
    account1.deposit(3000);
    cout << "After new deposit, " << account1.getOwner() << " has a new balance of $"
         << account1.getBalance() << "." << endl;

    account1.withdraw(1000);
    cout << "After that withdrawal, " << account1.getOwner() << " has a new balance of $"
         << account1.getBalance() << "." << endl;

    return 0;
}