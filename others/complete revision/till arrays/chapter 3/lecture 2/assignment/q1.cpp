/*
Print the following pattern
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
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
        for (int k = 1; k <= side; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}