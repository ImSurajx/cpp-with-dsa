/*
Ques : Print the sum of this series :
1 - 2 + 3 - 4 + 5 - 6… upto ‘n’.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    cout << "sum of following series is: " << sum << endl;
    return 0;
}