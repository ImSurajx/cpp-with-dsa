#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter a number: ";
    cin >> side;
    for (int i = 1; i <= side; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout <<a<<" ";
            a+=2;
        }
        cout << endl;
    }

    return 0;
}