//04-01-25 (Date of experiment)
//This is a simple program to show switchcase for area of rectangle, circle and triangle.

using namespace std;
#include <iostream>

int main()
{
    int choice;
    float area, length, breadth, radius, base, height;
    cout << "Assignment 15- Area of Rectangle, Circle and Triangle" << endl;

    cout << "Choose with inputting the value of the choice." << endl;

    cout << "1. Area of Rectangle" << endl;
    cout << "2. Area of Circle" << endl;
    cout << "3. Area of Triangle" << endl;
    cout << "Enter your choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter the length of rectangle: " << endl;
        cin >> length;
        cout << "Enter the breadth of rectangle: " << endl;
        cin >> breadth;
        area = length * breadth;
        cout << "The area of rectangle is: " << area << endl;
        break;

    case 2:
        cout << "Enter the radius of circle: " << endl;
        cin >> radius;
        area = 3.14 * radius * radius;
        cout << "The area of circle is: " << area << endl;
        break;

    case 3:
        cout << "Enter the base of triangle: " << endl;
        cin >> base;
        cout << "Enter the height of triangle: " << endl;
        cin >> height;
        area = 0.5 * base * height;
        cout << "The area of triangle is: " << area << endl;
        break;

    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}