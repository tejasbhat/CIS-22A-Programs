// Lab5c
//
// This program is a driver that tests a function comparing the
// contents of two int arrays. In this program, this concept of comparing
// the elements of an array are done through the comparison of different pin
// numbers. These pin numbers are stored as vectors and passed to the testPIN
// function to see whether or not they have all the same elements. Finally,
// different messages are printed to show whether or ont the function worked properly.
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
#include <vector>

using namespace std;

// Prototype for the testPIN function used later on in the code.
bool testPIN(vector<int>, vector<int>);

int main ()
{
    // Create a base pin as a vector named pin1.
    vector<int> pin1 { 2, 4, 1, 8, 7, 9, 0 };
    // Create a second pin as a vector with only 1 element
    // different from pin1.
    vector<int> pin2 { 2, 4, 6, 8, 7, 9, 0 };
    // Create a third pin vector with all elements different from pin1.
    vector<int> pin3 { 1, 2, 3, 4, 5, 6, 7 };
    
    // Check to see if the tetPIN method worked as originally intended,
    // and then print an ERROR or SUCCESS method depending on the result.
    // Do this by comparing pin1 and pin2, pin1 and pin3, and pin1 and pin1.
    if (testPIN(pin1, pin2))
        cout << "ERROR: pin1 and pin2 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin2 are different.\n";
    
    if (testPIN(pin1, pin3))
        cout << "ERROR: pin1 and pin3 report to be the same.\n";
    else
        cout << "SUCCESS: pin1 and pin3 are different.\n";
    
    if (testPIN(pin1, pin1))
        cout << "SUCCESS: pin1 and pin1 report to be the same.\n";
    else
        cout << "ERROR: pin1 and pin1 report to be different.\n";
    
    return 0;
}

//******************************************************************
//* testPIN
//*
//* This function accepts two int vectors. The arrays are
//* compared. If they contain the same values, true is returned.
//* If they contain different values, false is returned.
//*
//* Parameters:
//*    custPIN - the first PIN number to be compared
//*    databasePIN - the second PIN number to be compared
//*    size - the size of the PIN number vectors
//*
//* Returns:
//*    pinsEqual - whether or not the two pins are the same
//*
//******************************************************************

bool testPIN(vector<int> custPIN, vector<int> databasePIN) {
    // Create bool variable to store whether or not the two PIN numbers
    // are equal.
    bool pinsEqual = true;
    
    // If the size of the two pins is different, then set
    // pinsEqual to false.
    if(custPIN.size() != databasePIN.size()) {
        pinsEqual = false;
    }
    
    // Go through both PIN numbers until a difference is found.
    // If a difference is not found, return true. Otherwise, return false.
    for (int index = 0; pinsEqual && index < custPIN.size(); index++){
        if (custPIN[index] != databasePIN[index]) {
            pinsEqual = false;
        }
    }
    return pinsEqual;
}

/*
 --------------------------------------------
 
 SUCCESS: pin1 and pin2 are different.
 SUCCESS: pin1 and pin3 are different.
 SUCCESS: pin1 and pin1 report to be the same.
 
 */

