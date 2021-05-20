include "Bank.h"
#include<iostream>

#include<string>

using namespace std;

// Empty bank with no user accounts

Bank::Bank() : max_size(0), curr_size(0), members(NULL)
{}


// Creating an empty number of user accounts
Bank::Bank(int size) : max_size(size), curr_size(0)

{

       members = new UserAccount[size];

}
// Returns no. of user accounts in the banking system
int Bank::get_current_number_of_accounts()

{

       return curr_size;

}


UserAccounts*Bank::get_members()

{

       return members;

}



