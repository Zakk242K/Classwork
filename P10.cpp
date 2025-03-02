//23-11-24 (Date of experiment)
//This is a simple program used for calculation of percentage of marks of student's in 5 subjects.

using namespace std;
#include <iostream>

int main()
{

    float sub1, sub2, sub3, sub4, sub5, total, percentage;
    cout << "Assignment 10- Percentage of Marks" << endl;

    cout << "Enter the marks of subject 1: " << endl;
    cin >> sub1;

    cout << "Enter the marks of subject 2: " << endl;
    cin >> sub2;

    cout << "Enter the marks of subject 3: " << endl;
    cin >> sub3;

    cout << "Enter the marks of subject 4: " << endl;
    cin >> sub4;

    cout << "Enter the marks of subject 5: " << endl;
    cin >> sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total / 500) * 100;

    cout << "The total marks are: " << total << endl;
    cout << "The percentage of marks is: " << percentage << "%" << endl;

    return 0;
}