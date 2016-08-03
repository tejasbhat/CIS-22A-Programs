// months
//
// This program displays the number of days in each month of the year.
// This process is accomplished using two one-dimensional arrays that
// hold the names of the months and the number of days in each month.
// These two arrays are used within a for loop to get the desired output.
//
// Author: Tejas Bhat
//
// Date: 07/21/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//************************************************************************
//* main
//*
//* This function does all the processing in the program, looping through
//* two separate arrays, days[] and monthNames[], to print out the months
//* and how many days each of them contain. This function uses the
//* concepts of constants, one-dimensional arrays, and for loops.
//*
//************************************************************************
int main()
{
    // Define and intialize a constant integer to hold the amount of
    // months in the year.
    const int MONTHS = 12;
    
    // Declare and initialize an integer array to hold the days that each month
    // of the year has. Utilize the MONTHS constant as a size declarator.
    int days[MONTHS] = { 31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31};
    
    // Declare and intialize a string array to hold the names of all the months
    // in the year. Utilize the MONTHS constant as a size declarator.
    string monthNames[MONTHS] = {"January", "February", "March",
        "April",   "May",      "June",
        "July",    "August",   "September",
        "October", "November", "December"};
    
    // Loop from the range 0 to MONTHS - 1 to display the months and
    // how many days each of them has.
    for (int count = 0; count < MONTHS; count++)
    {
        // Report the month names and the number of days that each
        // of them have to the screen.
        cout << monthNames[count] << " has ";
        cout << days[count] << " days.\n";
    }
    return 0;
}

/*
 --------------------------------------------
 
 January has 31 days.
 February has 28 days.
 March has 31 days.
 April has 30 days.
 May has 31 days.
 June has 30 days.
 July has 31 days.
 August has 31 days.
 September has 30 days.
 October has 31 days.
 November has 30 days.
 December has 31 days.
 
 */