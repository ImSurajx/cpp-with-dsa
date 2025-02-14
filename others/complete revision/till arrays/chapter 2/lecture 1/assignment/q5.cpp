/*
Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
isosceles triangle.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three sides of triangle: ";
    cin >> a >> b >> c;
    if (a == b)
    {
        if (b == c)
        {
            cout << "equilateral triangle." << endl;
        }
        else
        {
            cout << "scalene triangle." << endl;
        }
    }
    else
    {
        cout << "isosceles triangle." << endl;
    }

    return 0;
}