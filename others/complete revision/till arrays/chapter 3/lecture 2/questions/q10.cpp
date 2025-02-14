/*
Ques : Print the given pattern
*       *
  *   *
    *
  *   *
*       *

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
            if (j == i || i + j == (side + 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}