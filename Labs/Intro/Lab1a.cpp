#include <iostream>
#include <string>

using namespace std;

int main()
{
    int loanAmount = 0;
    double annualInterestRate = 0.0;
    int loanTerm = 0;
    double monthlyPayment = 0.0;
    double totalInterests = 0.0;
    string name;

    cout << "Hi! Enter your first name: ";
    cin >> name;

    cout << "Loan Amount Borrowed: ";
    cin >> loanAmount;

    cout << "Annual Interest Rate: ";
    cin >> annualInterestRate;

    cout << "Loan term (in terms of months): ";
    cin >> loanTerm;

    monthlyPayment = loanAmount * annualInterestRate/12/100;
    totalInterests = monthlyPayment*loanTerm;

    cout << endl << endl << "Borrower's name: " << name << endl;
    cout << "Loan amount borrowed: " << loanAmount << endl;
    cout << "Annual interest rate: " << annualInterestRate << endl;
    cout << "Number of months: "  << loanTerm << endl;
    cout << "Monthly payment: " << monthlyPayment << endl;
    cout << "Total interests: " << totalInterests << endl;

    return 0;
}
