//10-01-25 (Date of experiment)
//This is a simple program to print a pattern of increasing numbers.

using namespace std;
#include <iostream>

int main()
{
    int rows;
    cout << "Assignment 20- Pattern of Increasing Numbers" << endl;

    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    cout << "\n\n";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}