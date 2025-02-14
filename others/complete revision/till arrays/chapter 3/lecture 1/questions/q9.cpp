/*
Ques : Two numbers are entered through the
keyboard. Write a program to find the value of one
number raised to the power of another.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a raise to power b: ";
    cin >> a >> b;
    float power = 1.0;
    while (b < 0)
    {
        power *= (1.0 / a);
        b++;
    }
    while (b > 0)
    {
        power *= a;
        b--;
    }
    cout << "a raise to power b is: " << power << endl;
    return 0;
}