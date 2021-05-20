#ifndef COMPOUND_ACCOUNT_H
#define COMPOUND_ACCOUNT_H

#include <iostream>
#include <string>

#include "details.h"

class compound_account {
private:
    double balance;
    double current_loan;
    int credit_score;
    double interest_rate;
public:
    compound_account();
    void deposit(double amount);
    void withdraw(double amount);
    int get_balance();
    void set_credit_score(int score);
    int get_credit_score();
    void set_interest_rate(int rate);
    int get_interest_rate();
    int get_current_loan();
    void pay_loan(double amount);
    void make_loan(double amount);
    int calculate_interest (int month);
    ~compound_account();
};
