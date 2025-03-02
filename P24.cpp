//16-01-25 (Date of experiment)
//This is a program for printing and finding the sum of each row of array elements.

using namespace std;
#include <iostream>

int main()
{
    int num[2][2] = {{1, 2}, {3, 4}};
    for (int r = 0; r < 2; r++)
    {
        int rowSum = 0; // Initialize sum for the current row
        for (int c = 0; c < 2; c++)
        {
            cout << num[r][c] << "\t";
            rowSum += num[r][c]; // Add the current element to the row sum
        }
        cout << "| Sum: " << rowSum << endl; // Print the sum of the current row
    }
    return 0;
}