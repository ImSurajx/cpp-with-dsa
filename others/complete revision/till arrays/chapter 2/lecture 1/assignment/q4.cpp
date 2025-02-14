/*
Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7
Output 1: Area is greater than perimeter.
*/
#include <iostream>
using namespace std;
int main()
{
    float length;
    cout << "enter length of rectangle: ";
    cin >> length;
    float bredth;
    cout << "enter bredth of rectangle: ";
    cin >> bredth;
    float area = length * bredth;
    float perimeter = 2 * (length + bredth);
    if (area > perimeter)
    {
        cout << area << " area is larger than perimeter " << perimeter << endl;
    }
    else
    {
        cout << perimeter << " perimeter is larger than area " << area << endl;
    }
    return 0;
}