//05-01-25 (Date of experiment)
//This is a simple program to represent fibonacci series.

using namespace std;
#include <iostream>

void fibonacci(int num) {
    int a = 0, b = 1, next;
    for (int i = 3; i <= num; ++i) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main ()
{

    int num;
    cout << "Assignment 18- Fibonacci Series" << endl;

    cout << "Enter the number: " << endl;
    cin >> num;

    if (num <= 0)
    {
        cout << "Enter a Positive integer : " << endl;
    }
    else if (num == 1)
    {
        cout << "The fibonacci series is: 0" << endl;
    }
    else if (num == 2)
    {
        cout << "The fibonacci series is: 0 1" << endl;
    }
    else
    {
        cout << "The fibonacci series is: 0 1 ";
        fibonacci(num);
    }

    return 0;

}