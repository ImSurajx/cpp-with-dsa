// Ques : Take 3 numbers input and tell if they
// can be the sides of a triangle.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter three sides of triangle: ";
    cin >> a >> b >> c;
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (a + c > b)
            {
                cout << a << " " << b << " " << c << " is sides of traingle.";
            }
            else
            {
                cout << a << " " << b << " " << c << " is not sides of traingle.";
            }
        }
        else
        {
            cout << a << " " << b << " " << c << " is not sides of traingle.";
        }
    }
    else
    {
        cout << a << " " << b << " " << c << " is not sides of traingle.";
    }
    return 0;
}