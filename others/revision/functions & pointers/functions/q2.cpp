// Ques : Pascal triangle
#include <iostream>
using namespace std;
int fact(int n)
{
    int store = 1;
    while (n > 0)
    {
        store *= n;
        n--;
    }
    return store;
}
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact((i - j))) << " ";
        }
        cout << endl;
    }

    return 0;
}