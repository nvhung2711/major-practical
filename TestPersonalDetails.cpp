#include "PersonalDetails.cpp"

int main()
{
    // Person named Alex and their details
    PersonalDetails Alex("Alex Smith", "alexsmith123", "3f9m3039m0", "0439 289 829", "alexsmith@gmail.com", "What is the name of my grade 3 teacher?", "Georgia", 24, 39000);
    // Test of each method
    cout << Alex.getFullName() << endl;
    cout << Alex.getUsername() << endl;
    cout << Alex.getPassword() << endl;
    cout << Alex.getPhoneNumber() << endl;
    cout << Alex.getEmail() << endl;
    cout << Alex.getSecretQuestion() << endl;
    cout << Alex.getSecretAnswer() << endl;
    cout << Alex.getAge() << endl;
    cout << Alex.getAnnualIncome() << endl;

    return 0;
}