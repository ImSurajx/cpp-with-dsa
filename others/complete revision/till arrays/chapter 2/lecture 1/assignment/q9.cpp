// Write a C++ program to input any character and check whether it is the alphabet, digit or special
// character.
// Input 1: ch = ‘9’
// Output 1: digit
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter an character: ";
    cin >> ch;
    if ((int(ch) >= 65 && int(ch) <= 90) || (int(ch) >= 97 && int(ch) <= 122))
    {
        cout << ch << " is an alphabet." << endl;
    }
    else if (int(ch) >= 48 && int(ch) <= 57)
    {
        cout << ch << " is a digit." << endl;
    }
    else
    {
        cout << "invalid input!" << endl;
    }

    return 0;
}