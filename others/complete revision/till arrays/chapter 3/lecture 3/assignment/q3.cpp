/*
Print the following pattern
Input: n = 4
Output:
        A
      B A B
    C B A B C
  D C B A B C D
E D C B A B C D E

      1
    2 1 2
  3 2 1 2 3
4 3 2 1 2 3 4
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int nst = 1;
    int nsp = n - 1;
    for (int i = 1; i <= n; i++)
    {
        int a = i;
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        nsp--;
        for (int k = 1; k <= i - 1; k++)
        {
            cout << char(a + 64) << " ";
            a--;
        }
        int b = 1;
        for (int l = 1; l <= nst; l++)
        {
            cout << char(b + 64) << " ";
            b++;
        }

        nst++;

        cout << endl;
    }

    return 0;
}