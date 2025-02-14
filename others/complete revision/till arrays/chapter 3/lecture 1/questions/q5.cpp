/*
Ques : WAP to print reverse of a given
number.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    int reverse = 0;
    int lastDigit;
    while (num > 0)
    {
        reverse = reverse * 10;
        lastDigit = num % 10;
        reverse += lastDigit;
        num /= 10;
    }
    cout << "reverse of following number is: " << reverse << endl;
    return 0;
}