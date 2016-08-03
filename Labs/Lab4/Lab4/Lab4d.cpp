// Lab4d
//
// This program simulates a talent competition with five judges who give scores
// to all the performers. The scores range from 0 - 10 (decimal numbers
// allowed) and a performer's score is calculated by dropping the highest
// and lowest scores and averaging the other three scores. This program
// uses four functions to achieve this task. getJudgeData() generates
// a random number from 1 to 10 to simulate a judge giving a score,
// calcScore() calculates a performer's total score, findLowest() finds
// the lowest score of the five, and findHighest() finds the highest score
// of the five.
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

// Prototype for the getJudgeData, calcScore, findLowest, and findHighest
// functions used later on in the code.
void getJudgeData(double &);
double calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

//************************************************************************
//* main
//*
//* This function tests all the methods in the program to assure that all
//* functions work as planned. First, this function calls the getJudgeData
//* function five times to get the five judges' randomly generated scores and
//* store them in their appropriate variables. Then, calcScore
//* is called to calculate the overall score. Finally, all the judges' scores,
//* the highest score, lowest score, and overall score are outputted to the screen.
//*
//************************************************************************
int main() {
    // Declare and initalize variables to hold the scores of the first
    // through fifth judge, the overall score, and lowest/highest score.
    double judge1, judge2, judge3, judge4, judge5, overallScore,
           highestScore, lowestScore;
    judge1 = judge2 = judge3 = judge4 = judge5 = overallScore
           = highestScore = lowestScore = 0.0;
    
    // Seed the random number generator with the current time. This is
    // done here so that the same number isn't generated every time in
    // the getJudgeData function.
    srand(static_cast<int>(time(0)));
    
    // Call getJudgeData five times to get five scores for the judges.
    getJudgeData(judge1);
    getJudgeData(judge2);
    getJudgeData(judge3);
    getJudgeData(judge4);
    getJudgeData(judge5);
    
    // Call lowestScore and highestScore to find out the lowest and
    // highest judge scores. Store these two values in their appropriate
    // variables.
    lowestScore = findLowest(judge1, judge2, judge3, judge4, judge5);
    highestScore = findHighest(judge1, judge2, judge3, judge4, judge5);
    
    // Call calcScore to find the overall score of the performer. Store
    // this in the overallScore variable.
    overallScore = calcScore(judge1, judge2, judge3, judge4, judge5);
    
    // Print out labels for judge 1 through 5, the lowest score, the
    // highest score, and the overall score. This makes it easy for
    // the user to identify all of the different scores.
    cout << setw(10) << "Judge 1" << setw(10) << "Judge 2"
         << setw(10) << "Judge 3" << setw(10) << "Judge 4"
         << setw(10) << "Judge 5" << setw(15) << "Lowest Score"
         << setw(15) << "Highest Score" << setw(15) << "Overall Score" << endl;
    
    // Create a separating line between the identifying words and
    // the actual scores.
    cout << "------------------------------------------------"
         << "------------------------------------------------" << endl;
    
    // Print out the scores for judges one through five, the lowest score,
    // highest score, and overall score for the performer.
    cout << setprecision(2) << showpoint
         << setw(8)  << judge1 << setw(10) << judge2
         << setw(10) << judge3 << setw(10) << judge4
         << setw(10) << judge5 << setw(12) << lowestScore
         << setw(15) << highestScore << setw(15) << overallScore
         << endl;
    
    return 0;
}

//************************************************************************
//* getJudgeData
//*
//* This function uses a random number generator to determine a number
//* between 0 to 10 as a judge's score. This score is then assigned to the
//* reference parameter variable judgeScore.
//*
//* Parameters:
//*    &judgeScore - reference parameter that holds a single judge's score
//*
//*************************************************************************
void getJudgeData(double &judgeScore) {
    // Generate a random number from the range 0 to 10, and store it in judgeScore.
    judgeScore = rand() % 11;
}

//************************************************************************
//* findHighest
//*
//* This function takes in all five of the judges' scores and uses a chain
//* of if statements to find out the highest score. This score is then
//* returned.
//*
//* Parameters:
//*    judge1 - the first judge's score (random number from 0 to 10).
//*    judge2 - the second judge's score (random number from 0 to 10).
//*    judge3 - the third judge's score (random number from 0 to 10).
//*    judge4 - the fourth judge's score (random number from 0 to 10).
//*    judge5 - the fifth judge's score (random number from 0 to 10).
//*
//* Returns:
//*    highestScore - the highest score out of the five judges' scores
//*
//*************************************************************************
double findHighest(double judge1, double judge2, double judge3, double judge4, double judge5) {
    //Use a chain of if statements to find out the highest score.
    double highestScore = judge1;
    if(judge2 > highestScore) {
        highestScore = judge2;
    }
    if(judge3 > highestScore) {
        highestScore = judge3;
    }
    if(judge4 > highestScore) {
        highestScore = judge4;
    }
    if(judge5 > highestScore) {
        highestScore = judge5;
    }
    return highestScore;
}

//************************************************************************
//* findLowest
//*
//* This function takes in all five of the judges' scores and uses a chain
//* of if statements to find out the lowest score. This score is then
//* returned.
//*
//* Parameters:
//*    judge1 - the first judge's score (random number from 0 to 10).
//*    judge2 - the second judge's score (random number from 0 to 10).
//*    judge3 - the third judge's score (random number from 0 to 10).
//*    judge4 - the fourth judge's score (random number from 0 to 10).
//*    judge5 - the fifth judge's score (random number from 0 to 10).
//*
//* Returns:
//*    lowestScore - the lowest score out of the five judges' scores
//*
//*************************************************************************
double findLowest(double judge1, double judge2, double judge3, double judge4, double judge5) {
    //Use a chain of if statements to find out the lowest score.
    double lowestScore = judge1;
    if(judge2 < lowestScore) {
        lowestScore = judge2;
    }
    if(judge3 < lowestScore) {
        lowestScore = judge3;
    }
    if(judge4 < lowestScore) {
        lowestScore = judge4;
    }
    if(judge5 < lowestScore) {
        lowestScore = judge5;
    }
    return lowestScore;
}

//************************************************************************
//* calcScore
//*
//* This function takes in all five of the judges' scores and calculates
//* the performer's overall score. The functions lowestScore and highestScore
//* are called to find out the highest and lowest values so that they
//* are not incorporated into the calculation of the overall score.
//*
//* Parameters:
//*    judge1 - the first judge's score (random number from 0 to 10).
//*    judge2 - the second judge's score (random number from 0 to 10).
//*    judge3 - the third judge's score (random number from 0 to 10).
//*    judge4 - the fourth judge's score (random number from 0 to 10).
//*    judge5 - the fifth judge's score (random number from 0 to 10).
//*
//* Returns:
//*    overallScore - the performer's overall score
//*
//*************************************************************************
double calcScore(double judge1, double judge2, double judge3, double judge4, double judge5) {
    // Call lowestScore and highestScore to find the lowest and highest score
    // so that they are not used to calculate the overall score.
    double lowestScore = findLowest(judge1, judge2, judge3, judge4, judge5);
    double highestScore = findHighest(judge1, judge2, judge3, judge4, judge5);
    
    // Calculate a total sum score by adding all the five judges' scores
    // together and then subtracting the lowest and highest scores.
    double sumScore = judge1 + judge2 + judge3 + judge4 + judge5
                      - highestScore - lowestScore;
    
    // Calculate an overall score by dividing the sum score by 3. Then,
    // return this value.
    double overallScore = sumScore/3;
    return overallScore;
}


/*
 --------------------------------------------
 
 RUN 1:
 
 Judge 1   Judge 2   Judge 3   Judge 4   Judge 5   Lowest Score  Highest Score  Overall Score
 ------------------------------------------------------------------------------------------------
   10.       1.0       3.0       4.0       4.0         1.0            10.            5.3

 RUN 2:
 
 Judge 1   Judge 2   Judge 3   Judge 4   Judge 5   Lowest Score  Highest Score  Overall Score
 ------------------------------------------------------------------------------------------------
   9.0       8.0       10.       9.0       7.0         7.0            10.            8.7
 
 RUN 3: 
 
 Judge 1   Judge 2   Judge 3   Judge 4   Judge 5   Lowest Score  Highest Score  Overall Score
 ------------------------------------------------------------------------------------------------
   8.0       6.0       4.0       5.0       3.0         3.0            8.0            5.0
 
 */