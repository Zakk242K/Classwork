//23-11-24 (Date of experiment)
//This is a simple program used for calculating the roots of the quadratic equation.

using namespace std;
#include <iostream>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, D;
    cout << "Assignment 9- Roots of Quadratic Equation" << endl;

    cout << "Enter the value of a: " << endl;
    cin >> a;

    cout << "Enter the value of b: " << endl;
    cin >> b;

    cout << "Enter the value of c: " << endl;
    cin >> c;

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots are real and different." << endl;
        cout << "The roots are: " << x1 << " and " << x2 << endl;
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        cout << "The roots are real and same." << endl;
        cout << "The roots are: " << x1 << " and " << x1 << endl;
    }
    else
    {
        cout << "The roots are imaginary." << endl;
    }

    return 0;
}