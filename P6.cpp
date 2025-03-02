//2-12-24 (Date of experiment)
//This program is a simple program that uses user input of the year to heck wether the year is leap year or not.

using namespace std;
#include <iostream>

int main()
{
    int year;

    cout << "Assignment 6- Leap Year" << endl;
    //Leap year with help of variables given by user

    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << year << " is a leap year." << endl;
            }
            else
            {
                cout << year << " is not a leap year." << endl;
            }
        }
        else
        {
            cout << year << " is a leap year." << endl;
        }
    }
    else
    {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}