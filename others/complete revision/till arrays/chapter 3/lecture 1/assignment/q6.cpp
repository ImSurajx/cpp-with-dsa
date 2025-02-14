/*
WAP to print the sum of a given number and its reverse.
Sample Input : 12
Sample Output : 33 [12+21]
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int temp = num;
    int sum = 0;
    int reverse = 0;
    int lastDigit;
    while (num > 0)
    {
        reverse = reverse * 10;
        lastDigit = num % 10;
        reverse += lastDigit;
        num /= 10;
    }
    cout << "sum of even digits: " << temp + reverse << endl;
    return 0;
}