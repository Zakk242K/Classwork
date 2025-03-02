//05-01-25 (Date of experiment)
//This is a simple program to find the factorial of a number.

using namespace std;
#include <iostream>

int main()
{
    int num, fact = 1;
    cout << "Assignment 16- Factorial of a number" << endl;

    cout << "Enter the number: " << endl;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "The factorial of " << num << " is: " << fact << endl;

    return 0;
}