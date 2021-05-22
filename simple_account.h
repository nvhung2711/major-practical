#ifndef SIMPLE_ACCOUNT_H
#define SIMPLE_ACCOUNT_H

#include <iostream>
#include <string>

#include "details.h"

class simple_account {
private:
    double balance;
    double current_loan;
    int credit_score;
    double interest_rate;
public:
    simple_account();
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
    int calculate_monthly_interest (int month);
    int calculate_interest(int month);
    ~simple_account();
};