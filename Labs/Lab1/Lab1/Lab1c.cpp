// Lab1c
//
// This program uses variables to store the expenses for each day of the week,
// from Sunday to Saturday. The averages and total of expenses are also stored
// in variables. Lastly, these expenses, the average, and the total are printed to the screen,
// lined-up vertically and with only a fixed decimal format of two numbers.
//
// Author: Tejas Bhat
//
// Date: 07/04/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double weekDay1 = 45.25;
    double weekDay2 = 49.38;
    double weekDay3 = 12.75;
    double weekDay4 = 123.50;
    double weekDay5 = 8.25;
    double weekDay6 = 19.95;
    double weekDay7 = 145.70;
    double total = weekDay1 + weekDay2 + weekDay3 + weekDay4 +
    weekDay5 + weekDay6 + weekDay7;
    double average = total/7;
    
    cout << setprecision(2) << fixed;
    cout << setw(10) << "" << "My Weekly Expense Report" << endl;
    cout << setw(10) << "" << "========================" << endl;
    cout << setw(10) << "" << setw(9) << left << "Sunday "
         << setw(7) << right << weekDay1 << endl;
    cout << setw(10) << "" << setw(9) << left << "Monday "
         << setw(7) << right << weekDay2 << endl;
    cout << setw(10) << "" << setw(9) << left << "Tuesday "
         << setw(7) << right << weekDay3 << endl;
    cout << setw(10) << "" << setw(9) << left << "Wednesday "
         << setw(6) << right << weekDay4 << endl;
    cout << setw(10) << "" << setw(9) << left << "Thursday "
         << setw(7) << right << weekDay5 << endl;
    cout << setw(10) << "" << setw(9) << left << "Friday "
         << setw(7) << right << weekDay6 << endl;
    cout << setw(10) << "" << setw(9) << left << "Saturday "
         << setw(7) << right << weekDay7 << endl;
    cout << "Total of expenses:  " << total << endl;
    cout << "Average of expenses: " << average << endl;
    
    return 0;
}


/*
 --------------------------------------------
          My Weekly Expense Report
          ========================
          Sunday      45.25
          Monday      49.38
          Tuesday     12.75
          Wednesday  123.50
          Thursday     8.25
          Friday      19.95
          Saturday   145.70
 Total of expenses:  404.78
 Average of expenses: 57.83
 */

