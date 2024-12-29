#include <iostream>
using namespace std;
int main()
{
    int n, nsp = -1;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i > 1)
        {
            for (int k = 1; k <= nsp; k++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
        nsp += 2;
    }
    int a;
    if (n >= 4)
    {
        a = n - 1 + (n - 4);
    }
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        cout << "*";
        for (int k = 1; k <= a; k++) // for five add +1, for six +2; for seven +3 in a & so on.
        {
            cout << " ";
        }
        if (i != n - 1)
        {
            cout << "*";
        }
        cout << endl;
        a -= 2;
    }

    return 0;
}