/*
Print the following pattern
Input: n = 4
Output:
1
A B
1 2 3
A B C D
1 2 3 4 5
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
        for (int k = 1; k <= i; k++)
        {
            if (i % 2 == 0)
            {
                cout << char(k + 64) << " ";
            }
            else
            {
                cout << k << " ";
            }
        }
        cout << endl;
    }
}