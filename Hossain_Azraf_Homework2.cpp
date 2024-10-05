// Azraf Hossain
// Homework 2
// 10.1.24

#include <iostream> // Required
#include <iomanip> // required for the loops
#include <string> // required so we can use the string variable

using namespace std; // required, shortens the cout statments

int main() // function where the code can run
{
    int month; // defining of both variables in this program
    int day;

    cout << "Input Month number: "; // prompting the user to input the value of both the month and day and set their values as such
    cin >> month;

    cout << "Input Day number: ";
    cin >> day;

    if (((month == 12) && (22 <= day && day <= 31)) || (1 == month || month == 2) || ((month == 3) && (1 <= day && day <= 20))) // if the month is dec and inbetween the days 22-31, the month is jan or feb, or the month is mar and inbetween 1-20, then it is winter.
        cout << "It is now Winter!";

    else if (((month == 9) && (23 <= day && day <= 30)) || (10 == month || month == 11) || ((month == 12) && (1 <= day && day <= 21))) // if the month is sep and inbetween the days 23-30, the month is oct or nov, or the month is dec and inbetween 1-21, then it is fall.
        cout << "It is now Fall!";
        
    else if (((month == 6) && (21 <= day && day <= 30)) || (7 == month || month == 8) || ((month == 9) && (1 <= day && day <= 22))) // if the month is jun and inbetween the days 21-30, the month is jul or aug, or the month is sep and inbetween 1-22, then it is summer.
        cout << "It is now Summer!";

    else if (((month == 3) && (21 <= day && day <= 31)) || (4 == month || month == 5) || ((month == 6) && (1 <= day && day <= 20))) // if the month is mar and inbetween the days 21-31, the month is apr or may, or the month is jun and inbetween 1-20, then it is spring.
        cout << "It is now Spring!";

    return 0; // required in all c++ programs
}

/*
Input Month number: 12
Input Day number: 26
It is now Winter!
*/