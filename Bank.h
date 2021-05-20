#ifndef BANK_H_

#define BANK_H_

#include "UserAccount.h"
#include "PersonalDetails.h"


class Bank

{

private:
        int balance;
        int size;
        int max_size;
        UserAccounts*members;

public:
// default constructor
        Bank();
        // constructor for a bank with a given number of accounts

        Bank(int size);
        // returns the number of accounts in the bank

        int get_current_number_of_accounts();
        // returns the array of members of the orchestra

        Bank* get_members();
        // Adds a user account
        bool add_Account(UserAccount new_UserAccount);
        // Th transfer balanace
        UserAccounttransferBalance(Useraccount, int balance)
        ~Bank();
};
#endif






