//23-11-24 (Date of experiment)
//This is a simple program used for calculation of percentage of marks of student's in 5 subjects.

using namespace std;
#include <iostream>

int main()
{

    float sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8, total, percentage;
    cout << "Assignment 10- Percentage of Marks" << endl;

    cout << "Enter the marks of English : " << endl;
    cin >> sub1;

    cout << "Enter the marks of Hindi : " << endl;
    cin >> sub2;

    cout << "Enter the marks of Maths : " << endl;
    cin >> sub3;

    cout << "Enter the marks of Physics : " << endl;
    cin >> sub4;

    cout << "Enter the marks of Social : " << endl;
    cin >> sub5;

    cout << "Enter the marks of Chemistry : " << endl;
    cin >> sub6;

    cout << "Enter the marks of Biology : " << endl;
    cin >> sub7;

    cout << "Enter the marks of Computer : " << endl;
    cin >> sub8;
    
    total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6 + sub7 + sub8;
    percentage = (total / 800) * 100;

    cout << "The total marks are: " << total << endl;
    cout << "The percentage of marks is: " << percentage << "%" << endl;

    if (percentage >= 90)
    {
        cout << "Grade: A+" << endl;
    }
    else if (percentage >= 80)
    {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 70)
    {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 60)
    {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 50)
    {
        cout << "Grade: D" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    

    return 0;
}