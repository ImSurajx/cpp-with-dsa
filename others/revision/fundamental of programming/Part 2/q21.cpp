#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= i; j++)
        {
            if (i == j)
            {
                cout << "1 ";
            }
            else if ((i + j) % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }

        cout << endl;
    }

    return 0;
}