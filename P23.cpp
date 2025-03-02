//16-01-25 (Date of experiment)
//This is a proram for accessing each element of 2-d array.

using namespace std;
#include <iostream>

int main()
{
    int rows, cols;
    cout << "Assignment 23- Accessing each element of 2-D array" << endl;

    cout << "Enter the number of rows: " << endl;
    cin >> rows;

    cout << "Enter the number of columns: " << endl;
    cin >> cols;

    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}