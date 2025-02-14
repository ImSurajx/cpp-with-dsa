/*
Ques : Print the given pattern
A B C D
A B C D
A B C D
A B C D
*/
#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter side: ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            cout << char(j+64) << " ";
        }
        cout << endl;
    }
}