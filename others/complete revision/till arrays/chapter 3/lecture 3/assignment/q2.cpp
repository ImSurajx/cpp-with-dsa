/*
Print the following pattern
Input: n = 4
Output:
      A 
    A B C 
  A B C D E 
A B C D E F G 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int nst = 1;
    int nsp = 3;
    for (int i = 0; i < n; i++)
    {
        int a = 65;
        for (int j = 1; j <= nsp; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= nst; k++)
        {
            cout << char(a) << " ";
            a++;
        }
        nst += 2;
        nsp--;
        cout << endl;
    }

    return 0;
}