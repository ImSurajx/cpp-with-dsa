/*
Print the following pattern
Sample Input : n= 4
Output :
1
1 2
1 2 3
1 2 3 4
*/
#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter side: ";
    cin >> side;
    int k = 1;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout << endl;
    }
}