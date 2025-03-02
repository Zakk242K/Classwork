//05-01-25 (Date of experiment)
//This is a simple program to represent fibonacci series.

using namespace std;
#include <iostream>

int main()
{
    int num, a = 0, b = 1, c;
    cout << "Assignment 18- Fibonacci Series" << endl;

    cout << "Enter the number of terms: " << endl;
    cin >> num;

    cout << "The fibonacci series is: " << a << " " << b << " ";

    for (int i = 3; i <= num; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

    return 0;
}