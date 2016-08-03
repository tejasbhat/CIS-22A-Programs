// remove
//
// This program is based on an integer array of test scores.
// A function findMin finds the index of the lowest test scores within
// the entire array of test scores. Another function, remove, removes the
// score at a specified index by shifting all the values to the right
// of the score to the left by one space. These two functions are tested
// in unison in the main method by an integer array with ten randomly generated
// scores (from the range 0 to 10).
//
// Author: Tejas Bhat
//
// Date: 07/28/2016
//
// IDE Used: Xcode
//

#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// Prototypes for the findMin, remove, and printArray
// functions used later on in the code.
int findMin (int [ ], int);
int remove (int [ ], int, int);
void printArray (int [ ], int);

//************************************************************************
//* main
//*
//* This function's tests both the findMin and remove functions by calling
//* them with an array with ten randomly generated test scores in the range
//* of 0 to 10. The scores are reported before and after removing the minimum
//* value, which is found through calling the findMin function.
//*
//************************************************************************
int main() {
    // Seed the random number generator with the current time.
    srand(static_cast<int>(time(0)));
    
    // Create an integer array with ten elements in it to hold all the scores.
    int testScores [10];
    // Create an integer variable to hold the changing size of the testScores[]
    // array, and intialize it to 10.
    int testScoresSize = 10;
    
    // Assign random numbers from 0 to 10 to all the spots in the testScores array.
    for(int index = 0; index < testScoresSize; index ++) {
        testScores [index] = rand() % 11;
    }
    
    // Print out the original array of scores by calling printArray.
    cout << "The original array of scores is: ";
    printArray(testScores, testScoresSize);
    
    // Receive and stores the index of the minimum value in the array of scores.
    int minimumIndex = findMin(testScores, testScoresSize);
    
    // Print out the value and index of the minimum value.
    cout << endl << endl << "The index of the minimum value is "
         << minimumIndex << " and the minimum value is " << testScores[minimumIndex]
         << endl << endl;
    
    // Update the size of the array of scores after removing the minimum.
    testScoresSize = remove(testScores, testScoresSize, minimumIndex);
    
    // Print out the new array after removing the minimum score.
    cout << "After removing the minimum, the array is: ";
    printArray(testScores, testScoresSize);
    cout << endl;
}

//************************************************************************
//* findMin
//*
//* This function returns the index of the minimum value in a specified
//* array of integers. This is done by keeping track of both the minimum
//* and the index of the minimum value as the array is processed.
//*
//* Parameters:
//*    data [] - an integer array of the test scores
//*    size - the size of the data[] array (the total number of test scores)
//*
//************************************************************************
int findMin (int data [], int size) {
    // Create variables currentMinimum and currentMinimumIndex to
    // keep running track of the minimum value and the index of this value.
    int currentMinimum = data[0];
    int currentMinimumIndex = 0;
    
    // Loop through the array of scores, updating the minimum and the index
    // of the minimum as time goes on.
    for (int index = 1; index < size; index ++) {
        if (data[index] < currentMinimum) {
            currentMinimum = data[index];
            currentMinimumIndex = index;
        }
    }
    // Return the index of the minimum value.
    return currentMinimumIndex;
}

//************************************************************************
//* remove
//*
//* This function removes the data from an array at a given index.
//* Removing a datum from an array means moving all data after the index
//* to the "left" to fill up the "hole" at the index. This is done through
//* a loop that processes the array and moves all the data beyond the deleted
//* point to the left by one index. The size of the new array is then returned.
//*
//* Parameters:
//*    data [] - an integer array of the test scores
//*    size - the size of the data[] array (the total number of test scores)
//*    index - the array index of the score that needs to be removed from the
//*            data[] array
//* Returns:
//*    the size of the array after removing the specified element
//*
//************************************************************************
int remove (int data [], int size, int index) {
    // Remove the element at the specified index by shifting all the values
    // from the right to the left by one space. This removes the
    // required value and shifts the remaining values as well.
    for(int currentIndex = index; currentIndex < size; currentIndex ++) {
        data[currentIndex] = data[currentIndex + 1];
    }
    // Return the new size of the array of scores.
    return size - 1;
}

//************************************************************************
//* printArray
//*
//* This function prints all the elements in an integer array separated
//* by spaces.
//*
//* Parameters:
//*    data [] - an integer array of the test scores
//*    size - the size of the data[] array (the total number of test scores)
//*
//************************************************************************
void printArray(int data [], int size) {
    // Loop through the array of integers, printing the value at each
    // index with a space to the right.
    for(int index = 0; index < size; index ++) {
        cout << data [index] << " ";
    }
}


/*
 --------------------------------------------
 
 RUN 1:
 The original array of scores is: 8 6 10 10 0 7 7 9 5 5
 
 The index of the minimum value is 4 and the minimum value is 0
 
 After removing the minimum, the array is: 8 6 10 10 7 7 9 5 5
 
 RUN 2:
 The original array of scores is: 5 10 0 0 1 0 7 7 8 2
 
 The index of the minimum value is 2 and the minimum value is 0
 
 After removing the minimum, the array is: 5 10 0 1 0 7 7 8 2
 
 RUN 3:
 The original array of scores is: 10 0 4 7 6 9 6 3 3 1
 
 The index of the minimum value is 1 and the minimum value is 0
 
 After removing the minimum, the array is: 10 4 7 6 9 6 3 3 1

 */