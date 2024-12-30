#include <iostream>
using namespace std;
int fact(int x)
{
    int f = 1;
    while (x > 0)
    {
        f *= x;
        x--;
    }
    return f;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << fact(i) << " ";
    }

    return 0;
}