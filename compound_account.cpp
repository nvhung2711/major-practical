#include "details.h"
#include "compound_account.h"

#include<iostream>
#include<string>

using namespace std;

compound_account::compound_account() {
    double balance = 0;
    double current_loan = 0;
    int credit_score = 0;
    double interest_rate = 0;
}

void compound_account::deposit(double amount) {
    balance = balance + amount;
    cout << "You have deposited " << amount << " dollars. Your account balance now is " << balance <<".\n";
}

void compound_account::withdraw(double amount) {
    balance = balance - amount;
    cout << "You have withdrawn " << amount << " dollars. Your account balance now is " << balance <<".\n";
}

int compound_account::get_balance() {
    return balance;
}

void compound_account::set_credit_score(int score) {
    credit_score = score;
}

int compound_account::get_credit_score() {
    return credit_score;
}

void compound_account::set_interest_rate(int rate) {
    interest_rate = rate;
}

int compound_account::get_interest_rate() {
    return interest_rate;
}

int compound_account::get_current_loan() {
    return current_loan;
}

void compound_account::pay_loan(double amount) {
    current_loan = current_loan - amount;
    cout << "You have paid " << amount << " dollars loan. Your current loan now is " << current_loan <<".\n";
}

void compound_account::make_loan(double amount) {
    current_loan = current_loan + amount;
    cout << "You have made " << amount << " dollars loan. Your current loan now is " << current_loan <<".\n";
}

int compound_account::calculate_interest (int month) {
    int money = 0;
    int interest = 1 + interest_rate;
    for (int i=0; i<month-1; i++) {
        interest = interest*interest;
    }
    money = balance*interest;
    return money;
}

compound_account::~compound_account() {

}
