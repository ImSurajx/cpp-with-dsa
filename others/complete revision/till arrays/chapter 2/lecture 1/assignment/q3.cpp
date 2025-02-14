/*
Any year is input through the keyboard. Write a program to determine whether the year is a leap year
or not. (Considering leap year occurs after every 4 years)
Input 1: 1976
Output: yes
Input 2: 2003
Output: no
*/
// Ques : Take positive integer input and tell if it
// is divisible by 5 or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (num % 4 == 0)
    {
        cout << num << " is a leap year." << endl;
    }
    else
    {
        cout << num << " is not a leap year." << endl;
    }

    return 0;
}