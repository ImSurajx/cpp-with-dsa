/*
Ques : WAP to print sum of digits of a given
number.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    cout << "sum of digits: " << sum << endl;
}