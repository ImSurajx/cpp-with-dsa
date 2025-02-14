/*
Q3: Given two numbers a and b, write a function to print all odd numbers between them.
*/
int odd(int &n)
{
    int x;
    if (n % 2 != 0)
        x = n;
    return x;
}
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a & b: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (odd(i) != 1)
        {
            cout << odd(i) << " ";
        }
    }
    cout << endl;
    return 0;
}