// Lab2d
//
// This program takes in the names of a certain amount of students,
// and sees which names are first and last alphabetically in the list.
// This is used to simulate which student would be at the front and which
// student would be at the end of the line if they lined up alphabetically.
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

using namespace std;

int main() {
    
    // Prompts the user for the number of students in the class,
    // and only accepts input between 1 and 25.
    int numStudents = 0;
    while(numStudents < 1 || numStudents > 25)
    {
        cout << "Please enter the number of students in the class: ";
        cin >> numStudents;
    }
    cout << endl;
    
    // Define three string variables to hold the current student that the user has entered,
    // the student at the front of the line, and the student at the end of the line.
    string lastAlphabetically = "";
    string firstAlphabetically = "";
    string currentStudent = "";
    
    // Loop through the number of students in the class to prompt the user for
    // the name of each student.
    for(int studentNumber = 0; studentNumber < numStudents; studentNumber ++)
    {
        cout << "Please enter the name of student number " << studentNumber + 1 << ": ";
        cin >> currentStudent;
        
        // If the user has only entered one student, assign that student to both
        // the first and last alphabetically.
        if(studentNumber == 0)
        {
            firstAlphabetically = lastAlphabetically = currentStudent;
        }
        
        // If the current student is higher alphabetically than the current last student,
        // then set the current student to the last student.
        if(currentStudent > lastAlphabetically)
        {
            lastAlphabetically = currentStudent;
        }
        
        // If the current student is lower alphabetically than the current first student,
        // then set the current student to the first student.
        if(currentStudent < firstAlphabetically)
        {
            firstAlphabetically = currentStudent;
        }
    }
    
    // Output the students at both the front and end of the line.
    cout << endl << "The student at the front of the line is " << firstAlphabetically << endl;
    cout << "The student at the end of the line is " << lastAlphabetically << endl << endl;
    
    return 0;
}

/*
 --------------------------------------------
 RUN 1:
 
 Please enter the number of students in the class: 15
 
 Please enter the name of student number 1: Abbie
 Please enter the name of student number 2: Bob
 Please enter the name of student number 3: Carl
 Please enter the name of student number 4: Dong
 Please enter the name of student number 5: Eddie
 Please enter the name of student number 6: Fred
 Please enter the name of student number 7: George
 Please enter the name of student number 8: Hobbes
 Please enter the name of student number 9: Iglesias
 Please enter the name of student number 10: Jennifer
 Please enter the name of student number 11: Kennedy
 Please enter the name of student number 12: Lu
 Please enter the name of student number 13: Michael
 Please enter the name of student number 14: Nadia
 Please enter the name of student number 15: Olsen
 
 The student at the front of the line is Abbie
 The student at the end of the line is Olsen
 
 RUN 2:
 
 Please enter the number of students in the class: 1
 
 Please enter the name of student number 1: Abbie
 
 The student at the front of the line is Abbie
 The student at the end of the line is Abbie

 RUN 3:
 
 Please enter the number of students in the class: 10
 
 Please enter the name of student number 1: Zoey
 Please enter the name of student number 2: Yao
 Please enter the name of student number 3: Xavier
 Please enter the name of student number 4: Wanda
 Please enter the name of student number 5: Vardy
 Please enter the name of student number 6: Ulso
 Please enter the name of student number 7: Tejas
 Please enter the name of student number 8: Sandeep
 Please enter the name of student number 9: Rakhi
 Please enter the name of student number 10: Qaxi
 
 The student at the front of the line is Qaxi
 The student at the end of the line is Zoey
 
 RUN 4:
 
 Please enter the number of students in the class: 20
 
 Please enter the name of student number 1: a
 Please enter the name of student number 2: ab
 Please enter the name of student number 3: abc
 Please enter the name of student number 4: abcd
 Please enter the name of student number 5: abcde
 Please enter the name of student number 6: b
 Please enter the name of student number 7: c
 Please enter the name of student number 8: d
 Please enter the name of student number 9: e
 Please enter the name of student number 10: f
 Please enter the name of student number 11: g
 Please enter the name of student number 12: h
 Please enter the name of student number 13: i
 Please enter the name of student number 14: j
 Please enter the name of student number 15: jk
 Please enter the name of student number 16: jkl
 Please enter the name of student number 17: jklm
 Please enter the name of student number 18: jklmn
 Please enter the name of student number 19: jklmno
 Please enter the name of student number 20: jklmnop
 
 The student at the front of the line is a
 The student at the end of the line is jklmnop
 
 */