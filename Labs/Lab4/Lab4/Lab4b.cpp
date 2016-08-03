// Lab4b
//
// This program simulates tossing a coin 15 times. The function coinToss
// generates a random number from 1 to 2, and displays "heads" if the number
// is 1 and "tails" if the number is 2. This function is simply calld from
// the main function 15 times to simulate the tossing of the coin 15 times.
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
#include <ctime>
#include <cstdlib>

using namespace std;

// Constant variable to hold the number of coin flips to do.
const int NUM_FLIPS = 15;

// Prototype for the coinToss function used later on in the code.
void coinToss();

//************************************************************************
//* main
//*
//* This function calls the coinToss function 15 times to simulate
//* flipping a coin 15 times. The random number generator is also
//* seeded with the current time.
//*
//************************************************************************
int main() {
    // Seed the random number generator with the current time.
    srand(static_cast<int>(time(0)));
    
    // Call the coinToss function 15 times using a for loop with a counter
    // variable to keep track of the current iteration. Print the current
    // toss number.
    for(int tossNumber = 1; tossNumber <= NUM_FLIPS; tossNumber ++) {
        cout << "Toss number " << setw(2) << tossNumber << ": ";
        coinToss();
    }
    return 0;
}

//************************************************************************
//* coinToss
//*
//* This function generates a random number from the range 1 to 2. If the
//* number is 1, then "heads" is outputted to the screen. If the number
//* is 2, then "tails" is outputted to the screen.
//*
//************************************************************************
void coinToss() {
    // Generate a random number from the range 1 to 2.
    int flipNumber = rand() % 2 + 1;
    
    // If the random number is 1, then print "heads".
    // If the random number is 2, then print "tails".
    if(flipNumber == 1) {
        cout << "heads" << endl;
    }
    else {
        cout << "tails" << endl;
    }
}

/*
 --------------------------------------------
 
 RUN 1:
 Toss number  1: heads
 Toss number  2: tails
 Toss number  3: heads
 Toss number  4: heads
 Toss number  5: tails
 Toss number  6: heads
 Toss number  7: tails
 Toss number  8: heads
 Toss number  9: tails
 Toss number 10: tails
 Toss number 11: tails
 Toss number 12: tails
 Toss number 13: heads
 Toss number 14: heads
 Toss number 15: heads
 
 RUN 2:
 Toss number  1: tails
 Toss number  2: tails
 Toss number  3: heads
 Toss number  4: heads
 Toss number  5: heads
 Toss number  6: tails
 Toss number  7: tails
 Toss number  8: heads
 Toss number  9: heads
 Toss number 10: heads
 Toss number 11: heads
 Toss number 12: heads
 Toss number 13: heads
 Toss number 14: tails
 Toss number 15: heads
 
 RUN 3:
 
 Toss number  1: heads
 Toss number  2: tails
 Toss number  3: heads
 Toss number  4: heads
 Toss number  5: tails
 Toss number  6: heads
 Toss number  7: heads
 Toss number  8: tails
 Toss number  9: heads
 Toss number 10: tails
 Toss number 11: tails
 Toss number 12: heads
 Toss number 13: tails
 Toss number 14: heads
 Toss number 15: heads
 
 */