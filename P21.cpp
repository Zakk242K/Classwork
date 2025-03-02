//10-01-25 (Date of experiment)
//This is a simple program to print a pattern in pyramid form.

using namespace std;
#include <iostream>

int main()
{
    int rows;
    cout << "Assignment 21- Pattern in Pyramid Form" << endl;

    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    cout << "\n\n";

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}