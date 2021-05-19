#include <iostream>
#include <string>
using namespace std;

class PersonalDetails
{
private:
    // check practical design
    string Full_name;
    string Username;
    string Password;
    string Phone_number;
    string Email;
    string Secret_question;
    string Secret_answer;
    int Age;
    int Annual_income;

public:
    // overidding default constructor that requires all details to create a profile of a person
    PersonalDetails(string full_name, string username, string password, string phone_number, string email, string secret_question, string secret_answer, int age, int annual_income)
    {
        Full_name = full_name;
        Username = username;
        Password = password;
        Phone_number = phone_number;
        Email = email;
        Secret_question = secret_question;
        Secret_answer = secret_answer;
        Age = age;
        Annual_income = annual_income;
    };
    // full name getter method
    string getFullName();
    // username getter method
    string getUsername();
    // password getter method
    string getPassword();
    // phone number getter method
    string getPhoneNumber();
    // email getter method
    string getEmail();
    // secret question getter method
    string getSecretQuestion();
    // secret answer getter method
    string getSecretAnswer();
    // age getter method
    int getAge();
    // annual income getter method
    int getAnnualIncome();
};
