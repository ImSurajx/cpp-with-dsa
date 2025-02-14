/*
Print the following pattern
Input: n = 4
Output:
A B C D E F G
A B C   E F G
A B       F G
A           G
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int nst = n - 1;
    int nsp = 1;
    int nst2 = nst;
    for (int i = 1; i <= (2 * n) - 1; i++)
    {
        cout << char(i + 64) << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            cout << char(a + 64) << " ";
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
            a++;
        }
        for (int l = 1; l <= nst2; l++)
        {
            cout << char(a + 64) << " ";
            a++;
        }
        nst--;
        nst2--;
        nsp += 2;
        cout << endl;
    }

    return 0;
}