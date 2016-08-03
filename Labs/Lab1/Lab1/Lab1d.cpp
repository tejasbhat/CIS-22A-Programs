// Lab1d
//
// This program changes four determined Celsius degrees, -25, 15, 37, and 90,
// into Fahrenheit.
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
    
    int celsiusTemp1 = -25, celsiusTemp2 = 15,
        celsiusTemp3 = 37, celsiusTemp4 = 90;
    double fahrenheitTemp1 = 0, fahrenheitTemp2 = 0,
           fahrenheitTemp3 = 0, fahrenheitTemp4 = 0;
    cout << "This program chages four determined celsius temperatures, -25, "
         << "15, 37, and 90 into Fahrenheit." << endl << endl;
    
    fahrenheitTemp1 = celsiusTemp1 * 9.0/5 + 32;
    fahrenheitTemp2 = celsiusTemp2 * 9.0/5 + 32;
    fahrenheitTemp3 = celsiusTemp3 * 9.0/5 + 32;
    fahrenheitTemp4 = celsiusTemp4 * 9.0/5 + 32;
    
    cout << setprecision(3);
    cout << celsiusTemp1 << " degrees celsius is " << fahrenheitTemp1 << " degrees Fahrenheit." << endl;
    cout << celsiusTemp2 << " degrees celsius is " << fahrenheitTemp2 << " degrees Fahrenheit." << endl;
    cout << celsiusTemp3 << " degrees celsius is " << fahrenheitTemp3 << " degrees Fahrenheit." << endl;
    cout << celsiusTemp4 << " degrees celsius is " << fahrenheitTemp4 << " degrees Fahrenheit." << endl;
    
    return 0;
}

/*
 ----------------------------------------------------------------------------------------------
 This program chages four determined celsius temperatures, -25, 15, 37, and 90 into Fahrenheit.
 
 -25 degrees celsius is -13 degrees Fahrenheit.
 15 degrees celsius is 59 degrees Fahrenheit.
 37 degrees celsius is 98.6 degrees Fahrenheit.
 90 degrees celsius is 194 degrees Fahrenheit.
 
 */


