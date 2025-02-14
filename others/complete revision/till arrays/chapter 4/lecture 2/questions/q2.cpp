/*
Write a function to find out the first and last digit of a number
without returning anything.
*/
#include <iostream>
using namespace std;
void digit(int x, int &y, int &z)
{
    z = x % 10;
    while (x > 9)
    {
        x /= 10;
    }
    y = x;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int lastDigit, firstDigit;
    digit(n, firstDigit, lastDigit);
    cout << "first digit is: " << firstDigit << endl;
    cout << "last digit is: " << lastDigit << endl;
    return 0;
}