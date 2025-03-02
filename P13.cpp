//04-12-24 (Date of experiment)
//This is a simple program used for swapping two numbers without temporary variable.

using namespace std;
#include <iostream>

int main()
{
    int num1, num2;
    cout << "Assignment 13- Swapping two numbers without temporary variable" << endl;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "Before swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}