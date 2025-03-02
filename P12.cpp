//04-12-24 (Date of experiment)
//This is a simple program used for swapping two numbers with temporary variable.

using namespace std;
#include <iostream>

int main()
{
    int num1, num2, temp;
    cout << "Assignment 12- Swapping two numbers with temporary variable" << endl;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    cout << "Before swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl;
    cout << "Second number: " << num2 << endl;

    return 0;
}