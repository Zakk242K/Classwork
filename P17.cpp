//05-01-25 (Date of experiment)
//This is a simple program to show switchcase for a calculator.

using namespace std;
#include <iostream>

int main()
{
    int choice;
    float num1, num2, result;
    cout << "Assignment 17- Calculator" << endl;

    cout << "Choose with inputting the value of the choice." << endl;

    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    switch (choice)
    {
    case 1:
        result = num1 + num2;
        cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
        break;

    case 2:
        result = num1 - num2;
        cout << "The difference of " << num1 << " and " << num2 << " is: " << result << endl;
        break;

    case 3:
        result = num1 * num2;
        cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;
        break;

    case 4:
        result = num1 / num2;
        cout << "The division of " << num1 << " and " << num2 << " is: " << result << endl;
        break;

    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}
