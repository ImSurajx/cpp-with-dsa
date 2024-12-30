// q12. write a program to check whether a given character is a vowel or a consonant.
// vowels info
// capital: 65,69, 73,79,85 small: 97, 101,105,111,117
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    if ((int(ch) >= 65 && int(ch) <= 90) || (int(ch) >= 97 && int(ch) <= 122))
    {
        if (int(ch) == 65)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 69)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 73)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 79)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 85)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 97)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 101)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 105)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 111)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else if (int(ch) == 117)
        {
            cout << ch << " is an vowels. " << endl;
        }
        else
        {
            cout << ch << " is a constent. " << endl;
        }
    }
    else
    {
        cout << ch << " not an alphabet" << endl;
    }
    return 0;
}