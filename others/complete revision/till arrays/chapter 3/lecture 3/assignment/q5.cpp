/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4 5 4 3 2 1 
1 2 3 4   4 3 2 1 
1 2 3       3 2 1 
1 2           2 1 
1               1 
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
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        if(b<=n){
            cout<<b<<" ";
            b++;
        } 
    }
    b--;
    for (int i = 1; i <= n-1; i++)
    {
        b--;    
        cout<<b<<" ";   
    }
    
    cout << endl;
    for (int i = 1; i <= n - 1; i++)
    {
        int a = 0;
        for (int j = 1; j <= nst; j++)
        {
            a++;
            cout << a << " ";
        }
        for (int k = 1; k <= nsp; k++)
        {
            cout << "  ";
        }
        for (int l = 1; l <= nst2; l++)
        {
            cout << a << " ";
            a--;
        }
        nst--;
        nst2--;
        nsp += 2;
        cout << endl;
    }

    return 0;
}