/*
Ques : Print the given pattern
1
0 1
1 0 1
0 1 0 1
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
            if (i == j)
            {
                cout << "1 ";
            }
            else if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
