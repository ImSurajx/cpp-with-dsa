#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int element = n - 1;
    int e_copy = element;
    int nsp = 1;
    // alphabet bridge.
    for (int i = 1; i <= (n * 2) - 1; i++)
    {
        cout << char(i + 64) << " ";
    }
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        // alphabets;
        int a;
        for (int j = 1; j <= element; j++)
        {
            cout << char(j + 64) << " ";
            a = j + 1;
        }
        element--;
        for (int k = 1; k <= nsp; k++)
        {
            cout << "# ";
            a++;
        }
        nsp += 2;
        for (int l = 1; l <= e_copy; l++)
        {
            cout << char(a + 64) << " ";
            a++;
        }
        e_copy--;
        cout << endl;
    }

    return 0;
}