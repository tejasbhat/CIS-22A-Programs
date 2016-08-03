// Lab3c
//
// This program reads in the names of all the students in a line from a text
// file named "LineUp.txt". These names are then processed to find out which
// student's name comes first alphabetically and whose name comes last alphabetically.
// This is used to simulate which student would be at the front and which
// student would be at the end of the line if they lined up alphabetically.
// The two students' names are then reported to the screen.
//
// Author: Tejas Bhat
//
// Date: 07/18/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // Set up an ifstream object to open the file "LineUp.txt"
    // and then open the file.
    ifstream lineupFile;
    lineupFile.open("LineUp.txt");
    
    // Check to see if the file was opened properly. If it was not, then
    // do not proceed with the rest of the program.
    if(!lineupFile)
    {
        cout << "The file could not be opened." << endl;
    }
    else
    {
        // Define variables to store the current student and the students at the
        // start and end of the line. These variables will be updated as the file
        // is processed.
        string currentStudent = "";
        string firstAlphabetically = "";
        string lastAlphabetically = "";
        
        // Read in the name of the first student in the text file and save it in
        // the variable current. This is done so that the variables firstAlphabetically
        // and lastAlphabetically can be intialized with the name of the first student
        // in the text file.
        lineupFile >> currentStudent;
        firstAlphabetically = lastAlphabetically = currentStudent;
        
        // Loop through the text file until there are no names left to read, updating
        // the first and last students in the line as the processing continues.
        while(lineupFile >> currentStudent)
        {
            // If the current student is lower alphabetically than the current first student,
            // then set the current student to the first student.
            if(currentStudent < firstAlphabetically)
            {
                firstAlphabetically = currentStudent;
            }
            
            // If the current student is higher alphabetically than the current last student,
            // then set the current student to the last student.
            if(currentStudent > lastAlphabetically)
            {
                lastAlphabetically = currentStudent;
            }
        }
        
        // Close the text file after using it.
        lineupFile.close();
        
        // Output the students at both the front and end of the line.
        cout << "The student at the front of the line is " << firstAlphabetically << endl;
        cout << "The student at the end of the line is " << lastAlphabetically << endl << endl;
    }
    
    return 0;
}


/*
 --------------------------------------------
 
 The student at the front of the line is Barb
 The student at the end of the line is Zev
 
 */

