// Lab3b
//
// This program reads a list of random numbers from a file named "Random.txt".
// While processing this file, the program computes the number of numbers in the file,
// the sum of all the numbers in the file, and the average of all the numbers
// in the file. This information is then reported to the screen.
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
    // Set up an ifstream object to open the file "Random.txt"
    // and then open the file.
    ifstream randomFile;
    randomFile.open("Random.txt");
    
    // Check to see if the file was opened properly. If it was not, then
    // do not proceed with the rest of the program.
    if(!randomFile)
    {
        cout << "The file could not be opened." << endl;
    }
    else
    {
        // Define and intialize variables to store the current number,
        // total amount of numbers, and sum of all the numbers in the text file.
        int currentNumber = 0;
        int numNumbers = 0;
        int sum = 0;
    
        // Define and intialize a variable to store the average of all the numbers
        // in the text file.
        double average = 0.0;
    
        // Loop through the text file, changing the variables sum and numNumbers as
        // the processing progresses.
        while(randomFile >> currentNumber)
        {
            numNumbers ++;
            sum += currentNumber;
        }
    
        // Close the text file after using it.
        randomFile.close();
    
        // Calculate the average by dividing the sum by the total amount of random numbers.
        average = static_cast<double>(sum)/numNumbers;
    
        // Output the total numbers in the file, sum of all numbers in the file, and
        // average of all numbers in the file. Set precision to 3 so that the average
        // does not appear as a floating-point number.
        cout << "Total numbers in the file: " << numNumbers << endl;
        cout << "Sum of all numbers in the file: " << sum << endl;
        cout << "Average of all numbers in the file: " << setprecision(3)
             << average << endl << endl;
    }
    
    return 0;
}


/*
 --------------------------------------------
 
 Total numbers in the file: 200
 Sum of all numbers in the file: 105527
 Average of all numbers in the file: 528
 
 */

