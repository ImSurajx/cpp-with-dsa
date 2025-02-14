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
    cout << "enter x & y: ";
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << " (" << x << "," << y << ")" << " coordinate lies on origin." << endl;
    }
    else if (x == 0)
    {
        cout << " (" << x << "," << y << ")" << " coordinates lies on y axis." << endl;
    }
    else if (y == 0)
    {
        cout << " (" << x << "," << y << ")" << " coordinates lies on x axis." << endl;
    }
    else
    {
        cout << " (" << x << "," << y << ")" << " coordinates isn't lies on any axis." << endl;
    }
    return 0;
}