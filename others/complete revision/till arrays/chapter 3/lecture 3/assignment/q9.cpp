/*
Print the following pattern
Sample Input : n = 8
Output :
              * 
            * * * 
          *   *   * 
        *     *     * 
      *       *       * 
    *         *         * 
  *           *           * 
*             *             * 
* * * * * * * * * * * * * * * 
*             *             * 
  *           *           * 
    *         *         * 
      *       *       * 
        *     *     * 
          *   *   * 
            * * * 
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
            if (i > 1)
            {
                cout << "* ";
            }
        }
        for (int l = 1; l <= nsp; l++)
        {
            cout << "  ";
        }
        for (int n = 1; n <= 1; n++)
        {
            cout << "* ";
        }
        for (int o = 1; o <= nsp; o++)
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
        nsp++;
        cout << endl;
    }
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;
    int nsp2 = n - 2;
    int nsp3 = nsp2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
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
            if (i < n)
            {
                cout << "* ";
            }
        }
        for (int n = 1; n <= nsp3; n++)
        {
            cout << "  ";
        }
        for (int o = 1; o <= 1; o++)
        {
            if (i < n)
            {
                cout << "* ";
            }
        }
        nsp2--;
        nsp3--;
        cout << endl;
    }

    return 0;
}