/*
Ques : WAP to count digits of a given number.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter number: ";
    cin >> num;
    int count = 0;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    cout << "number of digit: " << count << endl;
}