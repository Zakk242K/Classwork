//18-11-24 (Date of experiment)
//This program is a simple program that uses user input of details and calculate area and perimeter of circle.

using namespace std;
#include <iostream>

int main ()
{
    float radius, area, perimeter;

    cout << "Assignment 3- Area and Perimeter of Circle" << endl;
    //Area and Perimeter of circle with help of variables given by user

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = 3.14 * radius * radius;
    perimeter = 2 * 3.14 * radius;

    cout << "The area of the circle is: " << area << endl;
    cout << "The perimeter of the circle is: " << perimeter << endl;

    return 0;
}