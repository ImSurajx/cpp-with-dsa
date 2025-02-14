/*
Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
******
*    *
*    *
******
*/
#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter m: ";
    cin >> m;
    int n;
    cout << "enter n: ";
    cin >> n;
    int k = 1;
    for (int i = 1; i <= m; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            if (i == 1 || k == 1 || i == m || k == n)
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