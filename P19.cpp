//05-01-25 (Date of experiment)
//This is a program that uses for loop to generate a multplicaton table of a given number in the format of 2 x 1 = 2.

using namespace std;
#include <iostream>

int main()
{
    int num;
    cout << "Assignment 19- Multiplication Table" << endl;

    cout << "Enter the number: " << endl;
    cin >> num;

    for (int i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}