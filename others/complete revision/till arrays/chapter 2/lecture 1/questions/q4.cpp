/*
Ques : If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine
*/
#include <iostream>
using namespace std;
int main()
{
    int cp, sp;
    cout << "enter cost price: ";
    cin >> cp;
    cout << "enter selling price: ";
    cin >> sp;
    if (cp < sp)
    {
        cout << "seller made profit of: " << sp - cp << endl;
    }
    else
    {
        cout << "seller made loss of: " << cp - sp << endl;
    }
    return 0;
}