#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter a number: ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        // for spaces
        for (int j = 1; j <= (side-i); j++)
        {
            cout <<"  ";
        }
        // for star
        for (int k = 1; k <= i; k++)
        {
            cout <<k<<" ";
        }
        cout << endl;
    }

    return 0;
}