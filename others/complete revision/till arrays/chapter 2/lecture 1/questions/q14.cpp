/*
Ques : Write a program to check whether a
given character is a vowel or a consonant.
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
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            cout << ch << " is a vowel." << endl;
        }
        else
        {
            cout << ch << " is a constent." << endl;
        }
    }
    else
    {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}