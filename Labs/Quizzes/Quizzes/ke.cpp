// ke
//
// This program calculates the kinetic energy of a certain object using the
// object's mass (in kilograms) and velocity (in meters per second).
// The results of three separate tests are then reported to the
// screen to show the validity of the program.
//
// Author: Tejas Bhat
//
// Date: 07/19/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Prototypes for both the kineticEnergy and printResults functions
// used later on in the code.
double kineticEnergy(double, double);
void printResults(double, double, double);

int main() {
    // Define and intialize variables to store the masses and velocities
    // of the three test objects.
    double mass1, mass2, mass3;
    mass1 = mass2 = mass3 = 50.0;
    double velocity1 = 2.5;
    double velocity2 = 5.0;
    double velocity3 = 7.5;
    
    // Define three variables to store the three kinetic energies
    // of the tests. Call the function kineticEnergy with the
    // three test mases and velocities to find the appropriate
    // kinetic energies.
    double kineticEnergy1 = kineticEnergy(mass1, velocity1);
    double kineticEnergy2 = kineticEnergy(mass2, velocity2);
    double kineticEnergy3 = kineticEnergy(mass3, velocity3);
    
    // Print a header showing the user that mass, velocity, and kinetic
    // energy will be reported below.
    cout << left << setw(7) << "Mass" << setw(11) << "Velocity "
         << "Kinetic Energy" << endl;
    cout << "--------------------------------" << endl;
    
    // Call the function printResults with the three test masses, velocities,
    // and kinetic energies to report the tests to the screen.
    printResults(mass1, velocity1, kineticEnergy1);
    printResults(mass2, velocity2, kineticEnergy2);
    printResults(mass3, velocity3, kineticEnergy3);
    
}

//************************************************************************
//* kineticEnergy
//*
//* This function calculates and returns the kinetic energy of an object
//* using the object's mass and velocity. This is done using the formula
//* ke = 1/2(mv^2).
//*
//* Parameters:
//*    mass - the mass of the object (in kilograms)
//*    velocity - the velocity of the object (in meters per second)
//*
//* Returns:
//*    kineticEnergy - the kinetic energy of the object
//*
//************************************************************************
double kineticEnergy(double mass, double velocity) {
    // Calculate kinetic energy using the formula ke = 1/2(mv^2)
    // and store it in a variable.
    double kineticEnergy = 0.5 * mass * velocity * velocity;
    return kineticEnergy;
}

//************************************************************************
//* printResults
//*
//* This function outputs a certain objects mass, velocity, and kinetic
//* energy using the passed-in values in a pleasant format.
//*
//* Parameters:
//*    mass - the mass of the object (in kilograms)
//*    velocity - the velocity of the object (in meters per second)
//*    kineticEnergy - the kinetic energy of the object
//*
//************************************************************************
void printResults(double mass, double velocity, double kineticEnergy) {
    // Print out the mass, velocity, and kinetic energy in the given format.
    cout << setprecision(3) << showpoint << left << setw(7) << mass
         << setprecision(2) << setw(11) << velocity
         << setprecision(5) << kineticEnergy << endl;
}

/*
 --------------------------------------------
 
 Mass   Velocity   Kinetic Energy
 --------------------------------
 50.0   2.5        156.25
 50.0   5.0        625.00
 50.0   7.5        1406.2

*/