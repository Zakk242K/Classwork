//11-11-24 (Date of experiment)
//This program is a simple program that uses user input of detals and calculate area and perimeter of rectangle.

using namespace std;
#include <iostream>

int main ()
{
    float length, breadth, area, perimeter;

    cout << "Assignment 2- Area and Perimeter of Rectangle" << endl;
    //Area and Perimeter of rectangle with help of variables given by user

    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    area = length * breadth;
    perimeter = 2 * length + 2 * breadth;

    cout << "The area of the rectangle is: " << area << endl;
    cout << "The perimeter of the rectangle is: " << perimeter << endl;

    return 0;
}