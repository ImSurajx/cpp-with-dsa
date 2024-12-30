#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int nsp = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        cout << "* ";
        if (i >= 2)
        {
            for (int k = 1; k <= nsp - 1; k++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        if (i >= 2)
        {
            for (int l = 1; l <= nsp - 1; l++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
        nsp++;
    }
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        cout << "* ";
    }
    cout << endl;
    nsp = n - 2;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << "  ";
        }
        cout << "* ";
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        if (i < n)
        {
            cout << "* ";
        }
        for (int l = 1; l <= nsp; l++)
        {
            cout << "  ";
        }
        if (i < n)
        {
            cout << "* ";
        }
        cout << endl;
        nsp--;
    }
    return 0;
}