//9-12-24  (Date of experiment)
//This program is a simple program that checks whether the person is eligible for voting or not.

using namespace std;
#include <iostream>

int main()
{
    int age;

    cout << "Assignment 7- Voting Eligibility" << endl;
    //Voting eligibility with help of variables given by user

    cout << "Enter the age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You are eligible for voting." << endl;
    }
    else
    {
        cout << "You are not eligible for voting." << endl;
    }

    return 0;
}