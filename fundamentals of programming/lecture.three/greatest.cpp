// q6. print greatest of three.
#include <iostream>
using namespace std;
int main()
{
    int x, y, z;
    cout << "enter first number: ";
    cin >> x;
    cout << "enter second number: ";
    cin >> y;
    cout << "enter third number: ";
    cin >> z;
    if (x > y && x > z)
    {
        cout << "greatest integer is: " << x << endl;
    }
    else if (y > x && y > z)
    {
        cout << "greatest integer is: " << y << endl;
    }
    else if (x == y && y == z )
    {
        cout << "all numbers are same." << endl;
    }
    else
    {
        cout << "greatest integer is: " << z << endl;
    }
    return 0;
}