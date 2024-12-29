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
        cout <<i<<" ";
        if (i > 1)
        {
            for (int k = 1; k <= nsp; k++)
            {
                cout << " ";
            }
            cout <<i<<" ";
        }
        cout << endl;
        nsp += 2;
    }
}