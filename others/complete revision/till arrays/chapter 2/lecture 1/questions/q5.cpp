/*
Ques : Take positive integer input and tell if it
is a three digit number or not.
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a number: ";
    cin >> num;
    if (99 < num && num < 1000)
    {
        cout << "it's a three digit number." << endl;
    }
    else
    {
        cout << "it's not a three digit number." << endl;
    }
    return 0;
}