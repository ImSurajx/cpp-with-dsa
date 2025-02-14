/*
Ques : Write a program to check whether a
character is an alphabet or not.
*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter an alphabet: ";
    cin >> ch;
    if ((int(ch) >= 65 && int(ch) <= 90) || (int(ch) >= 97 && int(ch) <= 122))
    {
        cout << ch << " is an alphabet." << endl;
    }
    else
    {
        cout << ch << " not an alphabet." << endl;
    }

    return 0;
}