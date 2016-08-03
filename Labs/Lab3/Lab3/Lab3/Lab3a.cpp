// Lab3a
//
// This program reads, stores, and uses data from a file named "expenses.txt". This file
// contains the names and expenses of all seven days of the week, from Sunday to Saturday.
// The averages and total of expenses are calculated and stored in variables. A chain
// of if statements is then used to find the highest expense of the week, and is
// also stored in a separate variable. Lastly, the expenses, the average, the total,
// and the highest expense are printed to the screen. The output is lined-up vertically
// and uses a fixed decimal format of two numbers.
//
// Author: Tejas Bhat
//
// Date: 07/18/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // Set up an ifstream object to open the file "expenses.txt"
    // and then open the file.
    ifstream expensesFile;
    expensesFile.open("expenses.txt");
    
    // Check to see if the file was opened properly. If it was not, then
    // do not proceed with the rest of the program.
    if(!expensesFile)
    {
        cout << "The file could not be opened." << endl;
    }
    else
    {
        // Define variables to store the names of all the days of the week.
        string weekDay1, weekDay2, weekDay3, weekDay4,
               weekDay5, weekDay6, weekDay7;
    
        // Define and intialize variables to store the expenses of all the days of the week.
        double expense1, expense2, expense3, expense4,
               expense5, expense6, expense7;
        expense1 = expense2 = expense3 = expense4 = expense5 = expense6 = expense7 = 0.0;
    
        // Read in data from the input file and store the data in the appropriate variables.
        expensesFile >> weekDay1 >> expense1 >> weekDay2 >> expense2
                     >> weekDay3 >> expense3 >> weekDay4 >> expense4
                     >> weekDay5 >> expense5 >> weekDay6 >> expense6
                     >> weekDay7 >> expense7;
    
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
    }
    
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

