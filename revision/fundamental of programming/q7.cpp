// Ques : Take 3 positive integers input and print
//  the greatest of them.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter any three numbers: ";
    cin >> a >> b >> c;
    if (a > b && b > c)
    {
        cout << a << " is greatest.";
    }
    else if (b > a && b > c)
    {
        cout << b << " is greatest.";
    }
    else if (c > a && c > b)
    {
        cout << c << " is greatest.";
    }
    return 0;
}