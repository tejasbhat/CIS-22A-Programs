// Lab1e
//
// This program uses a random number generator to generate two
// numbers between 1 and 300. The addition of these two numbers
// is then graphically outputted to the screen.
//
// Author: Tejas Bhat
//
// Date: 07/04/2016
//
// IDE Used: Xcode
//

#include <ctime>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    unsigned seed = time(0);
    srand(seed);
    int addend1 = rand() % 300 + 1;
    int addend2 = rand() % 300 + 1;
    int sum = addend1 + addend2;
    cout << setw(5) << addend1 << endl;
    cout << "+ " << setw(3) << addend2 << endl;
    cout << "--------" << endl;
    cout << setw(5) << sum << endl;
    return 0;
}

/*
 --------------------------------------------
 
 RUN 1:
   147
 + 221
 --------
   368
 
 RUN 2:
   169
 +  93
 --------
   262
 
 RUN 3:
    23
 +  77
 --------
100
 
 */