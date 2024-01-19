#include <iostream>
#include "BankAccount.h"
#include <stdexcept>
using namespace std;

// constructors
BankAccount::BankAccount(string o)
{
    this->owner = o;
    this->balance = 0;
    cout << "opened account for owner " << o << "." << endl;
}
BankAccount::BankAccount(string o, int bal)
{
    if (bal <= 0)
    {
        cout << "canceling operation because of non-positive balance attempt." << endl;
        throw "balance must be positive";
    }
    else{
        this->owner = o;
        this->balance = bal;
        cout << "opened account for owner " << o << "." << endl;
    }
}
// destructor
BankAccount::~BankAccount()
{
    cout << this->owner << "'s account is being destroyed." << endl;
}
// deposit
void BankAccount::deposit(int amt)
{
    while (amt <= 0)
    {
        cout << "That is an invalid deposit. Please enter amount greater than 0: " << endl;
        cin >> amt;
    }
    this->balance += amt;
}
// withdrawal
void BankAccount::withdraw(int amt)
{
    while (amt <= 0 || amt > this->balance)
    {
        cout << "Invalid withdrawal. Please enter amount greater than 0 and "
             << "smaller than current balance: " << endl;
        cin >> amt;
    }
    this->balance -= amt;
}
// getters
string BankAccount::getOwner() const
{
    return this->owner;
}
int BankAccount::getBalance() const
{
    return this->balance;
}