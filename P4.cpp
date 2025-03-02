//18-11-24 (Date of experiment)
//This program is a simple program that uses user input of temp in celsius and convert it into fahrenheit.

using namespace std;
#include <iostream>

int main()
{
    float celsius, fahrenheit;

    cout << "Assignment 4- Celsius to Fahrenheit" << endl;
    //Conversion of celsius to fahrenheit with help of variables given by user

    cout << "Enter the temperature in celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    cout << "The temperature in fahrenheit is: " << fahrenheit << endl;

    return 0;
}