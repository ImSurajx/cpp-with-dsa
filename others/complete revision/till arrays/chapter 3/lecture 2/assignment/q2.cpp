/*
Print the following pattern
Input: n = 4
Output:
1 2 3 4
1 2 3
1 2
1
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
        for (int k = 1; k <= (side - i) + 1; k++)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}