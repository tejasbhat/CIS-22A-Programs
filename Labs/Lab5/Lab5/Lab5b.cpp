// Lab5b
//
// This program scores the written portion of the driver's licenes exam.
// The exam has 20 multiple choice questions, and the correct answers
// are stored in a character array of length 20. This program does not
// take user input, so the users answers are all randomly generated letters
// from A to D. These answers are stored in an array and are compared to
// the correct answers to see if the student passed or failed (passing
// requires 15 of the 20 questions to be right). A pass or fail message,
// the number of correct and incorrect answers, and a list showing the question
// numbers of the incorrectly answered questions is then reported to the screen.
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
#include <cstdlib>
#include <ctime>

using namespace std;

// Constant for the number of test questions in the test.
const int numTestQuestions = 20;

// Prototype for the scoreTest and printResults functions used later on in the code.
void scoreTest(char [], char [], vector<int>&, int&, int&);
void printResults(vector<int>, char[], char[], int, int);

int main() {
    // Seed the random number generator with the current time.
    srand(static_cast<int>(time(0)));
    
    // Declare and initalize an array containing all the correct answers to the test.
    char correctAnswers[numTestQuestions] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D',
                                              'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };
    
    // Create an array to hold the randomly generated student's answers.
    char studentAnswers[numTestQuestions];
    // Loop through the student answers array filling each index with a random
    // letter from A to D.
    for (int index = 0; index < numTestQuestions; index ++) {
        studentAnswers[index] = static_cast<char>(rand() % 4 + 65);
    }
    
    // Declare and initalize two counters to store the number of correct and incorrect answers.
    int numCorrectAnswers = 0;
    int numIncorrectAnswers = 0;
    
    // Create a vector to hold the student's incorrect answers. A vector is used
    // since the number of incorrect answers is not known, and a vector can
    // hold the exact amount of wrong answers with no need to guess about the length
    // as would be neeeded for an array.
    vector<int> incorrectQuestionNumbers;
    
    // Call scoreTest to get all the necessary information about the student's answers.
    scoreTest(correctAnswers, studentAnswers, incorrectQuestionNumbers,
              numCorrectAnswers, numIncorrectAnswers);
    
    // Call printResults to print all the required information about the test.
    printResults(incorrectQuestionNumbers, correctAnswers,
                 studentAnswers, numCorrectAnswers, numIncorrectAnswers);
    
    return 0;
}

//************************************************************************
//* scoreTest
//*
//* This function scores the student's test by looping through the
//* student's answers and tallying up the number of correct and incorrect
//* answers. The question numbers that the student misses are also collected
//* in a vector.
//*
//* Parameters:
//*    correctAnswers - the correct answers to the test
//*    studentAnswers -  the student's answers to the test
//*    incorrectQuestionNumbers - vector containing the question numbers
//*                               that the student got wrong.
//*    numCorrectAnswers - the number of questions the student got right
//*    numinCorrectAnswers - the number of questions the student got wrong
//*
//*************************************************************************
void scoreTest(char correctAnswers[], char studentAnswers[], vector<int>& incorrectQuestionNumbers,
               int& numCorrectAnswers, int& numIncorrectAnswers) {
    // Compare the student's answers to the correct answers using a loop.
    // Increment the wrong and correct answer counters and the vector that
    // holds the question numbers of all the incorrect answers.
    for (int index = 0; index < numTestQuestions; index ++) {
        if (correctAnswers[index] == studentAnswers[index]) {
            numCorrectAnswers ++;
        }
        else {
            numIncorrectAnswers ++;
            incorrectQuestionNumbers.push_back(index + 1);
        }
    }

}

//************************************************************************
//* printResults
//*
//* This function prints all the required results of the test.
//* First, two loops are used to print the correct answers and the student's
//* answers. Then, this function states whether or not the student failed
//* and how many questions the student got right and wrong. Finally,
//* all the questions numbers that the student got wrong are displayed.
//*
//* Parameters:
//*    incorrectQuestionNumbers - vector containing the question numbers
//*                               that the student got wrong.
//*    studentAnswers - the student's answers
//*    numCorrectAnswers - the number of questions the student got right
//*    numinCorrectAnswers - the number of questions the student got wrong
//*
//*************************************************************************
void printResults (vector<int> incorrectQuestionNumbers, char correctAnswers[], char studentAnswers[],
                   int numCorrectAnswers, int numIncorrectAnswers) {
    // Print out the correct answers using a loop.
    cout << "The correct answers are:   ";
    for (int index = 0; index < numTestQuestions; index ++) {
        cout << correctAnswers[index] << " ";
    }
    cout << endl;
    
    // Print out the student's answers using a loop.
    cout << "The student's answers are: ";
    for (int index = 0; index < numTestQuestions; index ++) {
        cout << studentAnswers[index] << " ";
    }
    
    // Report whether or not the student passed.
    if(numCorrectAnswers > 15) {
        cout << endl << "The student passed ";
    }
    else {
        cout << endl << "The student failed ";
    }

    // Report the number of correct and incorrect questions the student had.
    cout << "with a total of " << numCorrectAnswers << " correct answers and " <<
             numIncorrectAnswers << " incorrect answers." << endl;
    
    // Report which question numbers the student got wrong.
    cout << "The question numbers the student got wrong are: ";
    for (int index = 0; index < incorrectQuestionNumbers.size(); index ++) {
        cout << incorrectQuestionNumbers[index] << " ";
    }
    cout << endl;
}

/*
 --------------------------------------------
 RUN 1:
 
 The correct answers are:   A D B B C B A B C D A C D B D C C A D B
 The student's answers are: B B D B C B B B D A C B D B C C A B C D
 The student failed with a total of 7 correct answers and 13 incorrect answers.
 The question numbers the student got wrong are: 1 2 3 7 9 10 11 12 15 17 18 19 20
 
 RUN 2:
 
 The correct answers are:   A D B B C B A B C D A C D B D C C A D B
 The student's answers are: A A C A A D D C B A D B A B D B C C D C
 The student failed with a total of 5 correct answers and 15 incorrect answers.
 The question numbers the student got wrong are: 2 3 4 5 6 7 8 9 10 11 12 13 16 18 20
 
 RUN 3:
 
 The correct answers are:   A D B B C B A B C D A C D B D C C A D B
 The student's answers are: D D A D C D D B C C B C A C B A D D B B
 The student failed with a total of 6 correct answers and 14 incorrect answers.
 The question numbers the student got wrong are: 1 3 4 6 7 10 11 13 14 15 16 17 18 19
 
 */

