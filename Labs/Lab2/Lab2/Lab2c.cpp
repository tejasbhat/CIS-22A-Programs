// Lab2c
//
// This program uses a random number generator to generate two
// numbers between 100 and 999. The addition, subtraction, multiplication,
// and division of these two numbers is then graphically outputted to the
// screen with a separation line before the result.
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
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Seed the random number generator with the current time.
    srand(static_cast<int>(time(0)));
    
    // Generate two random numbers between 100 and 999, and
    // store them in two separate variables.
    int randomNumber1 = rand() % 900 + 100;
    int randomNumber2 = rand() % 900 + 100;
    
    // Find and store the sum of the two random numbers using simple addition.
    int sum = randomNumber1 + randomNumber2;
    
    // Find and store the difference of the two random numbers using simple subtraction.
    int difference = randomNumber1 - randomNumber2;
    
    // Find and store the product of the two random numbers using simple multiplication.
    int product = randomNumber1 * randomNumber2;
    
    // Find and store the quotient of the two random numbers using simple division. No casting
    // is used, so the quotient is not very accurate.
    int quotient = randomNumber1 / randomNumber2;
    
    // Format and output the first randomly generated number.
    cout << setw(7) << randomNumber1 << setw(10) << randomNumber1
         << setw(10) << randomNumber1 << setw(10) << randomNumber1 << endl;
    
    // Format and output all the operand signs and the secong randomly
    // generated number.
    cout << setw(3) << "+" << setw(4) << randomNumber2
         << setw(6) << "-" << setw(4) << randomNumber2
         << setw(6) << "*" << setw(4) << randomNumber2
         << setw(6) << "/" << setw(4) << randomNumber2 << endl;
    
    // Format and output a line separating the two random numbers from the result.
    cout << "  ------" << "    ------" << "    ------" << "    ------" << endl;
    
    // Format and output the result.
    cout << setw(7) << sum << setw(10) << difference
         << setw(11) << product << setw(9) << quotient << endl << endl;
    
    return 0;
}

/*
 --------------------------------------------
 
 RUN 1:
 
   337       337       337       337
 + 384     - 384     * 384     / 384
 ------    ------    ------    ------
   721       -47     129408        0
 
 RUN 2:
 
   759       759       759       759
 + 281     - 281     * 281     / 281
 ------    ------    ------    ------
  1040       478     213279        2
 
 RUN 3:
 
   904       904       904       904
 + 724     - 724     * 724     / 724
 ------    ------    ------    ------
  1628       180     654496        1
 
 */