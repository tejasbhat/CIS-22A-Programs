// Lab2a
//
// This program uses variables to store the expenses and names of each day of the week,
// from Sunday to Saturday. The averages and total of expenses are also calculated and stored
// in variables. A chain of if statements is used to find the highest expense of the week, and
// is also stored in a separate variable. Lastly, the expenses, the average, the total, and the
// highest expense are printed to the screen. The output is lined-up vertically and uses a fixed
// decimal format of two numbers.
//
// Author: Tejas Bhat
//
// Date: 07/07/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    // Define and initalize variables to hold the names of all
    // seven days of the week.
    string weekDay1 = "Sunday";
    string weekDay2 = "Monday";
    string weekDay3 = "Tuesday";
    string weekDay4 = "Wednesday";
    string weekDay5 = "Thursday";
    string weekDay6 = "Friday";
    string weekDay7 = "Saturday";
    
    // Define and initialize variables to hold the expenses
    // for every day of the week.
    double expense1 = 45.25;
    double expense2 = 49.38;
    double expense3 = 12.75;
    double expense4 = 123.50;
    double expense5 = 8.25;
    double expense6 = 19.95;
    double expense7 = 145.70;
    
    // Define and intialize variable that holds the total expense for the week.
    double totalExpense = expense1 + expense2 + expense3 + expense4 +
                          expense5 + expense6 + expense7;
    
    // Divide the total expense by 7 to find the average expense for every
    // day of the week.
    double average = totalExpense/7;
    
    // Define variable to hold the highest expense of the week.
    double highestExpense = expense1;
    
    // Use a chain of if statements to determine the highest
    // expense out of all seven expensees.
    if(highestExpense < expense2)
    {
        highestExpense = expense2;
    }
    if(highestExpense < expense3)
    {
        highestExpense = expense3;
    }
    if(highestExpense < expense4)
    {
        highestExpense = expense4;
    }
    if(highestExpense < expense5)
    {
        highestExpense = expense5;
    }
    if(highestExpense < expense6)
    {
        highestExpense = expense6;
    }
    if(highestExpense < expense7)
    {
        highestExpense = expense7;
    }
    
    // Use manipulators to pleasantly output the expense for each day
    // on the screen.
    cout << setprecision(2) << fixed;
    cout << setw(10) << "" << "My Weekly Expense Report" << endl;
    cout << setw(10) << "" << "========================" << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay1
         << setw(7) << right << expense1 << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay2
         << setw(7) << right << expense2 << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay3
         << setw(7) << right << expense3 << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay4
         << setw(7) << right << expense4 << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay5
         << setw(7) << right << expense5 << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay6
         << setw(7) << right << expense6 << endl;
    cout << setw(10) << "" << setw(9) << left << weekDay7
         << setw(7) << right << expense7 << endl << endl;
    
    // Display the total expense, average expense, and highest expense of the week.
    cout << "Total of expenses:  " << totalExpense << endl;
    cout << "Average of expenses: " << average << endl;
    cout << "Highest expense:    " << highestExpense << endl << endl;
    
    return 0;
}


/*
 --------------------------------------------
 
           My Weekly Expense Report
           ========================
           Sunday     45.25
           Monday     49.38
           Tuesday    12.75
           Wednesday 123.50
           Thursday    8.25
           Friday     19.95
           Saturday  145.70
 
 Total of expenses:  404.78
 Average of expenses: 57.83
 Highest expense:    145.70
 
 */

