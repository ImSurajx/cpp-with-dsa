/*
Ques : Pascal triangle
*/
#include <iostream>
using namespace std;

int fact(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num;
        num--;
    }
    return product;
}

int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(j) * fact(i - j)) << " ";
        }
        cout << endl;
    }

    return 0;
}