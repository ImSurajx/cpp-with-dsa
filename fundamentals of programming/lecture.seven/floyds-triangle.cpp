#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter a number: ";
    cin >> side;
    int a = 1;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<a<<" ";
            a++;
        }
        cout << endl;
    }

    return 0;
}