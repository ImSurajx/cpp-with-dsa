/*
Ques : Print the given pattern
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    int nst = n - 1;
    int nsp = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < nst; j++)
        {
            cout << "* ";
        }
        for (int k = 0; k < nsp; k++)
        {
            cout << "  ";
        }
        for (int l = 0; l < nst; l++)
        {
            cout << "* ";
        }
        nsp += 2;
        nst--;
        cout << endl;
    }

    return 0;
}