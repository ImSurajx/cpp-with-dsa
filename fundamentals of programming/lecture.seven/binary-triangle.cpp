#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter a number: ";
    cin >> side;
    int a = 5;
    for (int i = 1; i <= side; i++)
    {
        if(i%2!=0) a = 1;
        else a = 0;
        for (int j = 1; j <= i; j++)
        {
            cout <<a<<" ";
            // flipping
            if(a==1) a = 0;
            else a = 1;
        }
        cout << endl;
    }

    return 0;
}