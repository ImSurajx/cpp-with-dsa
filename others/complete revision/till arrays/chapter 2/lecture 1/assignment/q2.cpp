/*
Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit
Therefore area > perimeter.
*/
#include <iostream>
using namespace std;
int main()
{
    float radius;
    cout << "enter radius of circle: ";
    cin >> radius;
    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    if (area > circumference)
    {
        cout << area << " area is larger than circumference " << circumference << endl;
    }
    else
    {
        cout << circumference << "circumference is larger than area " << area << endl;
    }

    return 0;
}