/*
WAP to print the sum of all the even digits of a given number.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        if ((num % 10) % 2 == 0)
        {
            sum += num % 10;
        }
        num /= 10;
    }
    cout << "sum of even digits: " << sum << endl;
    return 0;
}