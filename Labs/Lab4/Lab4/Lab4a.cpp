// Lab4a
//
// This program calculates the falling distance of a certain object using the
// object's falling time (in seconds) and the force of gravity. This calculation
// is done in the function fallingDistance, which returns the distance (in meters)
// that the object has fallen in the given time time interval. This function is
// demonstrated by being called with the values 1 through 10 as arguments
// from the main function.
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

using namespace std;

// Constant double variable that stores the gravitational force
// needed for the falling distance calculation.
const double GRAVITATIONAL_FORCE = 9.8;

// Prototype for the fallingDistance function used later on in the code.
double fallingDistance(int);

//************************************************************************
//* main
//*
//* This function calls the fallingDistance function with the numbers
//* 1 through 10 as falling times, printing the falling distance results
//* as it goes. The output is formatted to be pleasant to view.
//*
//************************************************************************
int main() {
    // Loop through the numbers 1 to 10 and call the fallingDistance function
    // with these values. Then, print the results of the function calls
    // to the screen.
    for(int fallingTime = 1; fallingTime <= 10; fallingTime ++) {
        cout << "An object that falls for "
             << setw(2) << fallingTime
             << " second(s) falls a total distance of " << setw(5)
             <<  fallingDistance(fallingTime) << " meters." << endl;
    }
    return 0;
}

//************************************************************************
//* kineticEnergy
//*
//* This function calculates and returns the falling distance of an object
//* using the object's falling time and gravitational force. This is done
//* using the formula d = 1/2(gt^2).
//*
//* Parameters:
//*    fallingTime - the time it takes for the object to fall a certain distance
//*
//* Returns:
//*    fallingDistance - the distance that the object falls in the given time period
//*
//************************************************************************
double fallingDistance(int fallingTime) {
    // Calculate falling distance using the formula d = 1/2(gt^2)
    // and store it in a variable. Then, return the value.
    double fallingDistance = 0.5 * GRAVITATIONAL_FORCE * fallingTime * fallingTime;
    return fallingDistance;
}

/*
 --------------------------------------------
 
 An object that falls for  1 second(s) falls a total distance of   4.9 meters.
 An object that falls for  2 second(s) falls a total distance of  19.6 meters.
 An object that falls for  3 second(s) falls a total distance of  44.1 meters.
 An object that falls for  4 second(s) falls a total distance of  78.4 meters.
 An object that falls for  5 second(s) falls a total distance of 122.5 meters.
 An object that falls for  6 second(s) falls a total distance of 176.4 meters.
 An object that falls for  7 second(s) falls a total distance of 240.1 meters.
 An object that falls for  8 second(s) falls a total distance of 313.6 meters.
 An object that falls for  9 second(s) falls a total distance of 396.9 meters.
 An object that falls for 10 second(s) falls a total distance of   490 meters.
 
 */