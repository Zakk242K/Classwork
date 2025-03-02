//9-12-24 (Date of experiment)
//This is a simple program used for finding the area of square, circle, rectangle, triangle.

using namespace std;
#include <iostream>

int main()
{
    int Length , Breadth;// For Square and Rectangle
    int Radius; //For Circle
    int Height , Base; //For Triangle
    int arearect;
    int areasqar;
    int circ;
    int areatri;

    cout <<"Assignment 8- Area of Square, rectangle, Circle, Triangle" << endl;

    cout << "Enter the Length for Square/Rectangle: " << endl;
    cin >> Length;

    cout << "Enter the Breadth for Square/Rectangle: " << endl;
    cin >> Breadth;
    
    cout << "Enter Radius for Circle: " << endl;
    cin >> Radius;

    cout << "Enter The Height for Triangle: " << endl;
    cin >> Height;

    cout << "Enter The Base for Triangle: " << endl;
    cin >> Base;


    arearect = Length * Breadth; 

    areasqar = Length * Breadth;

    circ = 22/7 * Radius * Radius;

    areatri = Base/2 * Height;

    cout << "Area of Rectangle = " << arearect << endl;
    
    cout << "Area of Square = " << areasqar << endl;

    cout << "Area of Circle = "<< circ << endl;

    cout << "Area of Triangle = "<< areatri << endl;

    if ( arearect = areasqar)
    {
        cout << "The rectangle is a square as the Length is equals to Breadth." << endl;
    }
    else
    {
        cout << "The square is a rectangle as the Length is not equals to Breadth." << endl;
    }

    return 0;



}