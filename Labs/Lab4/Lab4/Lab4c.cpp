// Lab4c
//
// This program uses the present value formula to calculate how much money
// a person should put in his or her savings account in order to
// have a certain amount of money at a future time. To do this, the
// function presentValue accepts a future value, the annual interest rate,
// and how long the person has to accumulate the money (in years). This function
// then returns the amount of money that the person should place in his or her
// savings account at the current time. This function is called three times
// from the main method to show that it functions properly.
//
// Author: Tejas Bhat
//
// Date: 07/22/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

// Prototype for the presentValue function used later on in the code.
double presentValue(int, double, int);

//************************************************************************
//* main
//*
//* This function calls the presentValue function three times with certain
//* values to assure that the presentValue function works properly. The
//* present value, future value, annual interest rate, and number of years
//* are reported for each call to the presentValue function.
//*
//************************************************************************
int main() {
    // Create a graphical table to sort the future value, annual interest
    // rate, number  of years, and present value for each call to the
    // presentValue function. This is done by creating four different
    // labels and ouptutting them above a separating line.
    cout << setw(15) << "Future Value" << setw(26) << " Annual Interest Rate"
         << setw(20) << "Number of Years" << setw(20) << "Present Value" << endl;
    cout << "-----------------------------------------"
         << "-----------------------------------------" << endl;
    
    // Call the presentValue function three times with differing values.
    // Then, prints the present value, future value, annual interest rate,
    // and number of years for each call to the function.
    cout << setw(11) << "10000" << setw(23) << "3.25" << setw(21) << "10"
         << setw(23) << presentValue(10000, 3.25, 10) << endl;
    cout << setw(11) << "10000" << setw(23) << "4.25" << setw(21) << "15"
         << setw(23) << presentValue(10000, 4.25, 15) << endl;
    cout << setw(11) << "15000" << setw(23) << "3.75" << setw(21) << "17"
         << setw(22) << presentValue(15000, 3.75, 17) << endl;
    
    return 0;
}

//************************************************************************
//* presentValue
//*
//* This function takes in the future value, annual interest rate, and
//* number of years that a person has to accumulate a certain amount of
//* money. Then, this function uses the present value formula to find how
//* much money should be allocated to reach the future value in the given
//* amount of time.
//*
//* Parameters:
//*    futureValue - the amount of money that is required at the end
//*                  of the given time period
//*    annualInterestRate - the annual interest rate on the savings account
//*    numYears - the number of years that the money wil be in the
//*               savings account
//*
//* Returns:
//*    presentValue - the amount of money that should be placed in the
//*                   savings account now
//*
//*************************************************************************
double presentValue(int futureValue, double annualInterestRate, int numYears) {
    // Use the present value formula, P = F/(1+r)^n to calculate the required present
    // value and store it in a variable.
    double presentValue = futureValue / pow(1 + annualInterestRate / 100, numYears);
    return presentValue;
}

/*
 --------------------------------------------
 
 Future Value      Annual Interest Rate     Number of Years       Present Value
 ----------------------------------------------------------------------------------
   10000                   3.25                   10                7262.72
   10000                   4.25                   15                5356.23
   15000                   3.75                   17                8022.2
 
 */