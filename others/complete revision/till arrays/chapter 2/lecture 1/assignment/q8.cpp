/*
Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.
Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
Output 1: All 3 points lie on the same line.
*/
#include <iostream>
using namespace std;
int main()
{
    int x1, x2, x3, y1, y2, y3;
    cout << "enter x1 & y1: ";
    cin >> x1 >> y1;
    cout << "enter x2 & y2: ";
    cin >> x2 >> y2;
    cout << "enter x3 & y3: ";
    cin >> x3 >> y3;
    int area = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    if (area < 0)
    {
        area = -area;
    }
    if (area == 0)
    {
        cout << "(x1,y1), (x1,y1) & (x1,y1) coordinates lies on straight line." << endl;
    }
    else
    {
        cout << "(x1,y1), (x1,y1) & (x1,y1) coordinstes isn't lies on straight line." << endl;
    }
    return 0;
}