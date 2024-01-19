#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
using namespace std;

/* BANKACCOUNT specification file */
class BankAccount {
    public:
        /* Constructor & Destructor */
        BankAccount(string o);
        BankAccount(string o, int bal);
        ~BankAccount();
        /* deposits & withdrawals */
        void deposit (int amt);
        void withdraw (int amt);
        /* retrieve information */
        string getOwner() const;
        int getBalance() const;
    private:
        string owner;
        int balance;

};



#endif