/*
Print the following pattern
Sample Input : m = 4
Sample Output :
        *
      *   *
    *       *
  *           *
*               *
  *           *
    *       *
      *   *
        *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int nsp = -1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (n - i); j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "* ";
        }
        for (int l = 1; l <= nsp; l++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= 1; m++)
        {
            if (i == 1)
            {
            }
            else
            {
                cout << "* ";
            }
        }
        nsp += 2;
        cout << endl;
    }
    int nsp2 = (n * 2) - 5;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 1; k++)
        {
            cout << "* ";
        }
        for (int l = 1; l <= nsp2; l++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= 1; m++)
        {
            if (i == n - 1)
            {
            }
            else
            {
                cout << "* ";
            }
        }
        nsp2 -= 2;
        cout << endl;
    }

    return 0;
}