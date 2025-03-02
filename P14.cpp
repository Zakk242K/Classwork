//11-12-24 (Date of experiment)
//This is a simple program used for finding the greatest number among three numbers.

using namespace std;
#include <iostream>

int main()
{
    int num1, num2, num3;
    cout << "Assignment 14- Greatest number among three numbers" << endl;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "Enter the third number: " << endl;
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << "The greatest number is: " << num1 << endl;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << "The greatest number is: " << num2 << endl;
    }
    else
    {
        cout << "The greatest number is: " << num3 << endl;
    }

    return 0;
}