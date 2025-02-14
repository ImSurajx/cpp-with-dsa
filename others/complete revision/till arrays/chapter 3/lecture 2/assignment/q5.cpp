/*
Print the following pattern
Input n = 4
Output:
*
**
***
****
***
**
*

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
            cout<<"* ";
        }
        cout << endl;
    }
    for (int i = 1; i <= side; i++)
    {
        for (int k = 1; k <= (side-i); k++)
        {
            cout<<"* ";
        }
        cout << endl;
    }
}