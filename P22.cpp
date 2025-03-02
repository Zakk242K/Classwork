//16-01-25 (Date of experiment)
//This is a simple program to implement 2 1-D arrays.

using namespace std;
#include <iostream>

int main()
{
    int arr1[5], arr2[5];
    cout << "Assignment 22- Implementing 2 1-D arrays" << endl;

    cout << "Enter the elements of first array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the elements of second array: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr2[i];
    }

    cout << "The elements of first array are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "\nThe elements of second array are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    return 0;
}