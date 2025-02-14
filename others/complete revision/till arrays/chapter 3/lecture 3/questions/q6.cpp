/*
Ques : Print the given pattern
1 2 3 4 5 6 7 8 9 
1 2 3 4   6 7 8 9 
1 2 3       7 8 9 
1 2           8 9 
1               9 

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j <= (2 * n) - 1; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    int nst = n - 1;
    int nsp = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int a = 1;
        for (int j = 1; j <= nst; j++)
        {
            cout << a << " ";
            a++;
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            cout << a << " ";
            a++;
        }
        nsp += 2;
        nst--;
        cout << endl;
    }

    return 0;
}