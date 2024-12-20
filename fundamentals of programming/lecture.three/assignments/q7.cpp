/*
Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
Input 1: 2 0
Output 1: the point lies on the x - axis.
*/
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter value of x: ";
    cin >> x;
    cout << "enter value of y: ";
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "lies on origin." << endl;
    }
    else if ((x > 0 || x < 0) && (y > 0 || y < 0))
    {
        cout << "doesn't lies on any axis." << endl;
    }
    else if ((x > 0 || x < 0) && (y == 0))
    {
        cout << "lies on y-axis." << endl;
    }
    else
    {
        cout << "lies on y-axis." << endl;
    }
    return 0;
}