//25-11-24 (Date of experiment)
//This program is going to be used for calculating the reverse of five digit number.

using namespace std;
#include <iostream>

int main()
{
    int number, reverse = 0;

    cout << "Assignment 5- Reverse of a five digit number" << endl;
    //Reverse of a five digit number with help of variables by user input.

    cout << "Enter a five digit number: ";
    cin >> number;

    reverse = (number % 10) * 10000;
    number = number / 10;
    reverse = reverse + (number % 10) * 1000;
    number = number / 10;
    reverse = reverse + (number % 10) * 100;
    number = number / 10;
    reverse = reverse + (number % 10) * 10;
    number = number / 10;
    reverse = reverse + (number % 10);

    cout << "The reverse of the five digit number is: " << reverse << endl;

    return 0;
}