// Lab5a
//
// This program reads, stores, and uses data from a file named "expenses.txt" in different
// arrays. This file contains the names and expenses of all seven days of the week, from
// Sunday to Saturday. The averages and total of expenses are calculated and stored in
// variables. A loop with an if statement is then used to find the highest expense of the
// week, which is then stored in a separate variable. Lastly, the expenses, the average,
// the total, and the highest expense are printed to the screen. The output is lined-up
// vertically with a fixed decimal format of two numbers.
//
// Author: Tejas Bhat
//
// Date: 08/01/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

// Constant integer to store the length of a week.
const int WEEK_LENGTH = 7;

// Prototypes for the various functions used later on in the code.
void writeExpenses(string[], double[]);
void readExpenses(string[], double[]);
void printResults(string[], double[], double, double, double);
void calculateTotalAndHighestExpense(double [], double&, double&);

//******************************************************************
//* main
//*
//* This function tests the entire program by calling all the
//* functions in a logical order. First, two arrays are created containing
//* the names and expense of each day of the week. Then, writeExpenses is
//* called to write all these values to a text file. This function
//* then uses a new set of arrays to read the values from the file
//* by calling readExpenses. Some calculations are done by calling
//* the function calculateTotalAndHighestExpense, and finally everything
//* is outputted to the screen with a call to printResults.
//*
//******************************************************************
int main() {
    // Create an array to hold both the names of all the days of the week and the
    // expenses related to each day. Initialize these arrays with the appropriate values.
    string dayNames[WEEK_LENGTH] = { "Sunday", "Monday", "Tuesday", "Wednesday",
                           "Thursday", "Friday", "Saturday" };
    double dayExpenses[WEEK_LENGTH] = { 45.25, 49.38, 12.75, 123.50, 8.25, 19.95, 145.70 };
    
    // Call writeExpenses to write out all the days and their expenses to the text file
    // "expenses.txt".
    writeExpenses(dayNames, dayExpenses);

    // Create two new arrays to read in the names and expenses of all the days of the
    // week from the file "expenses.txt".
    string dayNames2[WEEK_LENGTH];
    double dayExpenses2[WEEK_LENGTH];
    
    // Call readExpenses to rad in all the days and their expenses from the text file
    // "expenses.txt".
    readExpenses(dayNames2, dayExpenses2);
    
    // Create variables to hold the total expense and highest expense out of all
    // the days of the week.
    double totalExpense = 0.0;
    double highestExpense = dayExpenses2[0];
    
    // Call calculateTotalAndHighetExpense to find the total and highest expenses
    // of the week.
    calculateTotalAndHighestExpense(dayExpenses2, highestExpense, totalExpense);
    
    // Calculate the average expense by dividing the total expense for the week
    // by the number of days in the week.
    double average = totalExpense/WEEK_LENGTH;
    
    // Call printResults to print the final results to the screen.
    printResults(dayNames2, dayExpenses2, average, totalExpense, highestExpense);
    
    return 0;
}

//******************************************************************
//* writeExpenses
//*
//* This function accepts two arrays that contain both the days
//* and expenses of every day of the week. These values are then
//* outputted to a newly created text file named "expenses.txt".
//*
//* Parameters:
//*    dayNames - an array containing the names of all the days of the week
//*    dayExpenses - an array containing the expenses for every day
//*                     of the week
//*
//******************************************************************
void writeExpenses(string dayNames[], double dayExpenses[]) {
    // Set up an ofstream object to create and open the file "expenses.txt".
    ofstream outputExpensesFile;
    outputExpensesFile.open("expenses.txt");
    
    // Check to see if the file was created properly. If it was not, then
    // do not proceed to write to the file.
    if(!outputExpensesFile)
    {
        cout << "The file could not be opened." << endl;
    }
    else
    {
        // Write out all the day names and their related expenses to the file
        // "expenses.txt".
        for(int index = 0; index < WEEK_LENGTH; index ++) {
            outputExpensesFile << dayNames[index] << " " << dayExpenses[index] << endl;
        }
    }
    
    // Close the output file.
    outputExpensesFile.close();
}

//******************************************************************
//* readExpenses
//*
//* This function opens the text file "expenses.txt" and reads all
//* the data appropriately two two passed-in arrays.
//*
//* Parameters:
//*    dayNames - an array containing the names of all the days of the week
//*    dayExpenses - an array containing the expenses for every day
//*                     of the week
//*
//******************************************************************
void readExpenses(string dayNames[], double dayExpenses[]) {
    // Set up an ifstream object to open the file "expenses.txt".
    ifstream readExpensesFile;
    readExpensesFile.open("expenses.txt");
    
    // Check to see if the file was opened properly. If it was not, then
    // do not proceed to read from the file.
    if(!readExpensesFile)
    {
        cout << "The file could not be opened." << endl;
    }
    else
    {
        // Loop through the file reading the names of the days and their expenses
        // into the appropriate arrays.
        int count = 0;
        while(readExpensesFile >> dayNames[count]) {
            readExpensesFile >> dayExpenses[count];
            count ++;
        }
    }
    
    // Close the file.
    readExpensesFile.close();
}

//******************************************************************
//* calculateTotalAndHighestExpense
//*
//* This function accepts an array of the expense for the entire week.
//* Then, it loops through the array to find the highest and total
//* expense for the entire week.
//*
//* Parameters:
//*    dayExpenses - an array containing the expenses for every day
//*                     of the week
//*    highestExpense - the highest expense of the week
//*    totalExpense - the total expense for the whole week
//*
//******************************************************************
void calculateTotalAndHighestExpense(double dayExpenses[], double& highestExpense, double& totalExpense) {
    // Loop through the dayExpenses2[] array, comparing values along the way to find
    // the highest expense of the week. Also, add to the totalExpenses variable.
    for(int index = 0; index < WEEK_LENGTH; index ++) {
        double currentExpense = dayExpenses[index];
        if(highestExpense < currentExpense) {
            highestExpense = currentExpense;
        }
        totalExpense += currentExpense;
    }
}

//******************************************************************
//* printResults
//*
//* This function accepts all the necessary values to be printed
//* and outputs them pleasantly to the screen using manipulators.
//*
//* Parameters:
//*    dayNames - an array containing the names of all the days of the week
//*    dayExpenses - an array containing the expenses for every day
//*                     of the week
//*    average - the average expense for each day of the week
//*    totalExpense - the total expense for the week
//*    highestExpense - the highest expense of the week
//*
//******************************************************************
void printResults(string dayNames[], double dayExpenses[], double average, double totalExpense, double highestExpense) {
    // Use manipulators to pleasantly output the expense for each day on the screen.
    cout << setprecision(2) << fixed;
    cout << setw(10) << "" << "My Weekly Expense Report" << endl;
    cout << setw(10) << "" << "========================" << endl;
    
    // Loop through both the dayNames2[] and dayExpenses2[] arrays, outputting their
    // contents appropriately to the screen.
    for (int index = 0; index < WEEK_LENGTH; index ++) {
        cout << setw(10) << "" << setw(9) << left << dayNames[index]
        << setw(7) << right << dayExpenses[index] << endl;
    }
    
    // Display the total expense, average expense, and highest expense of the week.
    cout << endl << "Total of expenses:  " << totalExpense << endl;
    cout << "Average of expenses: " << average << endl;
    cout << "Highest expense:    " << highestExpense << endl << endl;
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

