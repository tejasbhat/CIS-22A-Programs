// average
//
// This program is a tool that allows teachers and other users to calculate
// the average test score for all the tests in a class. A two-dimensional
// array is created with the rows representing different students and the columns
// representing different tests that a single student has taken. This array
// and the number of students in a certain class are passed into the function
// displayTestAverages, which shows the average for every single test
// in the class. The main function tests this method with two different
// two-dimensional arrays that simulate two different classes.
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

const int NUM_TESTS = 5; // Number of tests taken by all students

// Prototype for the displayTestAverages function used later on in the code.
void displayTestAverages(double [][NUM_TESTS], int);

//************************************************************************
//* main
//*
//* This function's main purpose is to test the displaysTestAverage function
//* with two separate calls. In this function, two two-dimensional arrays
//* are created to hold the test scores for class A and class B. Then,
//* displaysTestAverage is called with these two arrays and their respective
//* number of students to get the appropriate output.
//*
//************************************************************************
int main() {
    const int NUM_STUDENTS_A = 3; // Number of students in class A
    const int NUM_STUDENTS_B = 4; // Number of students in class B
    
    // Declare and initialize two two-dimensional arrays to hold the test
    // scores for both clas A and class B. There are 3 students in class A
    // and 4 students in class B.
    double scoresClassA[NUM_STUDENTS_A][NUM_TESTS] =
        {{88, 97, 79, 86, 94},
         {86, 91, 78, 79, 84},
         {82, 73, 77, 82, 89}};
    double scoresClassB[NUM_STUDENTS_B][NUM_TESTS] =
        {{88, 97, 79, 86, 94},
        {86, 91, 78, 79, 84},
        {82, 73, 77, 82, 89},
        {89, 83, 67, 78, 82}};
    
    // Create a distinction for the scores for class A.
    cout << "The scores for Class A: " << endl
         << "----------------------------" << endl;
    // Call displayTestAverages with the two dimensional array of test scores
    // and the number of students in class A to display the average score
    // for each of the five tests.
    displayTestAverages(scoresClassA, NUM_STUDENTS_A);
    
    // Create a distinction for the scores for class A.
    cout << "The scores for Class B: " << endl
         << "----------------------------" << endl;
    // Call displayTestAverages with the two dimensional array of test scores
    // and the number of students in class A to display the average score
    // for each of the five tests.
    displayTestAverages(scoresClassB, NUM_STUDENTS_B);
}

//************************************************************************
//* displayTestAverages
//*
//* This function accepts a two dimensional array of NUM_TESTS columns
//* and an integer that represents the number of students. Using this
//* information, the function displays five averages, one for each test
//* taken by all students. This is done by looping through the 2d-array
//* in a for loop and updating a sum variable as the looping progresses.
//* The sum variable is then divided by the number of scores for the test
//* to show the average for that particular test.
//*
//* Parameters:
//*    tests[][NUM_TESTS] - a two dimensional array of all the test scores
//*                         for a certain class
//*    numStudents - the number of students in the class
//*
//************************************************************************
void displayTestAverages(double tests[][NUM_TESTS], int numStudents) {
    // Loop through the two dimensional array of test scores, keeping a
    // variable to hold the sum of all the scores for a single test.
    for(int testNumber = 0; testNumber < NUM_TESTS; testNumber ++) {
        // Variable holds the sum of all the scores for a single test.
        double testSum = 0;
        // Loop through all the students for a single test, incrementing the
        // testSum variable along the way.
        for (int studentNumber = 0; studentNumber < numStudents; studentNumber ++) {
            testSum += tests[studentNumber][testNumber];
        }
        
        // Calculate the average score for a single test by dividing the
        // total scores by the number of students in the class.
        double average = testSum / numStudents;
        
        // Output the average score for a single test.
        cout << "Average of Test #" << testNumber + 1 << ":  "
             << showpoint << setprecision(4) << average << endl;
    }
    cout << endl;
}

/*
 --------------------------------------------
 
 The scores for Class A:
 ----------------------------
 Average of Test #1:  85.33
 Average of Test #2:  87.00
 Average of Test #3:  78.00
 Average of Test #4:  82.33
 Average of Test #5:  89.00
 
 The scores for Class B:
 ----------------------------
 Average of Test #1:  86.25
 Average of Test #2:  86.00
 Average of Test #3:  75.25
 Average of Test #4:  81.25
 Average of Test #5:  87.25
 
 */