#include "details.h"
#include "simple_account.h"

#include<iostream>
#include<string>

using namespace std;

simple_account::simple_account() {
    double balance = 0;
    double current_loan = 0;
    int credit_score = 0;
    double interest_rate = 0;
}

void simple_account::deposit(double amount) {
    balance = balance + amount;
    cout << "You have deposited " << amount << " dollars. Your account balance now is " << balance <<".\n";
}

void simple_account::withdraw(double amount) {
    balance = balance - amount;
    cout << "You have withdrawn " << amount << " dollars. Your account balance now is " << balance <<".\n";
}

int simple_account::get_balance() {
    return balance;
}

void simple_account::set_credit_score(int score) {
    credit_score = score;
}

int simple_account::get_credit_score() {
    return credit_score;
}

void simple_account::set_interest_rate(int rate) {
    interest_rate = rate;
}

int simple_account::get_interest_rate() {
    return interest_rate;
}

int simple_account::get_current_loan() {
    return current_loan;
}

void simple_account::pay_loan(double amount) {
    current_loan = current_loan - amount;
    cout << "You have paid " << amount << " dollars loan. Your current loan now is " << current_loan <<".\n";
}

void simple_account::make_loan(double amount) {
    current_loan = current_loan + amount;
    cout << "You have made " << amount << " dollars loan. Your current loan now is " << current_loan <<".\n";
}

int simple_account::calculate_monthly_interest (int month) {
    int monthly = 0;
    monthly = balance*interest_rate;
    return monthly;
}

int simple_account::calculate_interest (int month) {
    int money = 0;
    money = balance + balance*interest_rate*month;
    return money;
}

simple_account::~simple_account() {

}
