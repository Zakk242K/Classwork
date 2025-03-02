//04-12-24 (Date of experiment)
//This is a simple program used for checking whether the number is even or odd.

using namespace std;
#include <iostream>

int main()
{
    int num;
    cout << "Assignment 11- Even or Odd" << endl;

    cout << "Enter the number: " << endl;
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    return 0;
}