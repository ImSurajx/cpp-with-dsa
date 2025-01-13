// Bonus Ques : Print the factorials of first n numbers
#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    while (n > 0)
    {
        f *= n;
        n--;
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
        cout << "fact of " << i << " is: " << fact(i) << endl;
    }

    return 0;
}