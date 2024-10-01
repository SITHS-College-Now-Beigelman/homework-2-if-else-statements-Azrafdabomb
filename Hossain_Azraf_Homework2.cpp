// Azraf Hossain
// Homework 2
// 10.1.24

#include <iostream> // Required
#include <iomanip> // required for the loops
#include <string> // required so we can use the string variable

using namespace std; // required, shortens the cout statments


int main() // function where the code can run
{
    double month;
    double day;

    cout << "Input Month number: ";
    cin >> month;
    cout << "Input Day number: ";
    cin >> day;

    if (((month == 3) && (21 <= day <= 31)) || (4 == month || month == 5) || ((month == 6) && (1 <= day <= 20)))
        cout << "It is now Spring!";

    if (((month == 6) && (21 <= day <= 30)) || (7 == month || month == 8) || ((month == 9) && (1 <= day <= 22)))
        cout << "It is now Summer!";

    if (((month == 9) && (23 <= day <= 30)) || (10 == month || month == 11) || ((month == 12) && (1 <= day <= 21)))
        cout << "It is now Fall!";

    if (((month == 12) && (22 <= day <= 31)) || (1 == month || month == 2) || ((month == 3) && (1 <= day <= 20)))
        cout << "It is now Winter!";
    


    return 0;
}