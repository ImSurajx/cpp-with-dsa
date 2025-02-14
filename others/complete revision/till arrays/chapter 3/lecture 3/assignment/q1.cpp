/*
Print the following pattern
Input: n = 5
Output:
      1
    1 2 3
  1 2 3 4 5
1 2 3 4 5 6 7
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int nst = 1;
    int nsp = n-2;
    for (int i = 1; i < n; i++)
    {
        int a = 1;
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << a << " ";
            a++;
        }
        nst += 2;
        nsp--;
        cout << endl;
    }

    return 0;
}