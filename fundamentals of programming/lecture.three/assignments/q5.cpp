/*
Write a program to input sides of a triangle and check whether a triangle is
equilateral - all sides are equal.
scalene - non sides are equal.
isosceles - any two sides are equal.
Input : side1 = 5 side2 = 4 side3 = 4
Output: This is an Isosceles triangle.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter 1st side of triangle: ";
    cin >> a;
    cout << "enter 2nd side of triangle: ";
    cin >> b;
    cout << "enter 3rd side of triangle: ";
    cin >> c;
    // equilateral - all sides are equal.
    if ((a == b) && (a == c))
    {
        cout << "equilateral triangle." << endl;
    }
    // isosceles - any two sides are equal.
    else if (a == b || b == c || a == c)
    {
        cout << "Isosceles triangle." << endl;
    }
    // scalene - non sides are equal.
    else
    {
        cout << "scalene triangle." << endl;
    }

    return 0;
}