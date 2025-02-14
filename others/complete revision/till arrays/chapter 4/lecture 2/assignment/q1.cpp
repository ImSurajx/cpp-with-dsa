/*
Q1 : Write a program to find the product of two numbers using pointers.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a & b: ";
    cin >> a >> b;
    int *x = &a, *y = &b;
    int product = *x * *y;
    cout << "product is: " << product << endl;
    return 0;
}