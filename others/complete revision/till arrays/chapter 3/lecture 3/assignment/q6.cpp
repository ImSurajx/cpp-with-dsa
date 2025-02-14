/*
Print the following pattern
Input : n = 5
Output:
*                                   *
  *                               *
    *                           *
      *                       *
        *                   *
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
    int nsp = (n * 2) - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j < n; j++)
        {
            if (i == j)
            {
                cout << "* ";
            }
        }
        for (int l = 1; l < nsp; l++)
        {
            cout << "  ";
        }
        for (int m = 1; m <= 1; m++)
        {
            cout << "* ";
        }
        nsp -= 2;
        cout << endl;
    }

    return 0;
}