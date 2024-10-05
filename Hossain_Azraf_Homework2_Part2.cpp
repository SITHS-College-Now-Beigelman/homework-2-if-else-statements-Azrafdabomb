// Azraf Hossain
// Homework 2 Part 2
// 10.1.24

#include <iostream> // Required

using namespace std; // required, shortens the cout statments

int main() // function where the code can run
{ // starting bracket for the code
    double J1; // Defining all the variables to be used for all the judges' scores
    double J2;
    double J3;
    double J4;
    double J5;
    double J6;

    cout << "What are the scores of all six judges?: (input scores (1-10) in highest to lowest form for a correct ouput) " << endl; // prompting and receiving user input for all scores
    cin >> J1 >> J2 >> J3 >> J4 >> J5 >> J6;

    double score = (J2 + J3 + J4 + J5)/4; // calculation for the average of the 4 middle scores 
    cout << "Final score is: " << score;

    return 0; // Required for all c++ programs
} // ending bracket for the code

/*
What are the scores of all six judges?: (input scores (1-10) in highest to lowest form for a correct ouput) 
10
8
6
4
3
1
Final score is: 5.25
*/