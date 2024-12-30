// q7. write a program to check whether a character is an alphabet or not.
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter a character: ";
    cin >> ch;
    if (int(ch) >= 65 && int(ch) <= 90)
    {
        cout << "following character is a alphabet." << endl;
    }
    else if (int(ch) >= 97 && int(ch) <= 122)
    {
        cout << "following character is a alphabet." << endl;
    }
    else
    {
        cout << "not a alphabet." << endl;
    }
    return 0;
}