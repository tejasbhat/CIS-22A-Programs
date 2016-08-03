//manipulators
    // setw = set width with parameter for what width you want (reserving spaces) --- autoallignes to the right
    //left = anything inserted is left-justfied
    //right = anything inserted is right-justified
    //fixed = use decimal notation for floating-point values
    //setprecision(x): when used with fixed, print floating-point value using x digits after the decimal. Without fixed, print floating-point value using x signficant digits
    //showpoint: always print decimal point fof floating-point values
    //only do setpricision once

cout << setprecision(2) << fixed

getline(cin, variables) gets all the String on on eline
cin.get() will read the next character entered, even whitespace


//iomanip gives manipulators
// the "\n" command flushes out the output buffer

//two numbers separated by a space for input can be done with
cin >> height >> width

pow(x, y ) is x raised to the yth power

static_cast is used for casting variables

double m;
m = static_cast<double>(y2-y1)/(x2-x1);

char ch = 'C';
cout << ch << " is " << static_cast<int>(ch); //gives you ASCII code for the character

string state = "Tejas";
int size = state.length() //gets length of string

concatenating is same as java


//cmath header gets all math files
//double input, double output

//cstdlib header file give smath library functions
rand() returns random int between 0 and the largest int the computer holds.

srand(x) initalizes random number generator with unsigned int x



#include <ctime>
unsigned seed = time(0); //you need to seed this with a differetn rumber every time
//time(0) is the current time

srand(seed);//seed the generator

cout << rand() < endl;
