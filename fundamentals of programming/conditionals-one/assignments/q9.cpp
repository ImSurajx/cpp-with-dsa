/*
Write a C++ program to input any character and check whether it is the alphabet, digit or special
character.
Input 1: ch = ‘9’
Output 1: digit
*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << "it's a capital alphabet" << endl;
    }
    else if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << "it's a small alphabet" << endl;
    }
    else if (int(ch) >= 48 && int(ch) <= 57)
    {
        cout << "it's a digit." << endl;
    }
    else
    {
        cout << "non a digit & non a alphabet it's a character";
    }

    return 0;
}