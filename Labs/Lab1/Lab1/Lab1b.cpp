// Lab1b
//
// This program uses variables to store the expenses for each day of the week,
// from Sunday to Saturday. The averages and total of expenses are also stored
// in variables. Lastly, these expenses, the average, and the total are printed to the screen.
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
    
    cout << "\t\tMy Weekly Expense Report" << endl;
    cout << "\t\t========================" << endl;
    cout << "\t\tSunday " << weekDay1 << endl;
    cout << "\t\tMonday " << weekDay2 << endl;
    cout << "\t\tTuesday " << weekDay3 << endl;
    cout << "\t\tWednesday " << weekDay4 << endl;
    cout << "\t\tThursday " << weekDay5 << endl;
    cout << "\t\tFriday " << weekDay6 << endl;
    cout << "\t\tSaturday " << weekDay7 << endl << endl;
    cout << "Total of expenses: " << total << endl;
    cout << "Average of expenses: " << average << endl;
    
    return 0;
}
 
/*  
 --------------------------------------------
    My Weekly Expense Report
	========================
	Sunday 45.25
	Monday 49.38
	Tuesday 12.75
	Wednesday 123.5
	Thursday 8.25
	Friday 19.95
	Saturday 124.7
 
 Total of expenses: 383.78
 Average of expenses: 54.8257
*/

