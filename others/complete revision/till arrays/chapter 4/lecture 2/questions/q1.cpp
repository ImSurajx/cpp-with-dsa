/*
Write a program to calculate sum of two numbers
using pointers.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a & b: ";
    cin >> a >> b;
    int *x = &a, *y = &b;
    int sum = *x + *y;
    cout << "sum is: " << sum << endl;
    return 0;
}