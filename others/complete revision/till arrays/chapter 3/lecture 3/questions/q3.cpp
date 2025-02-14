/*
Ques : Print the given pattern
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int k = 1; k < (n - i) + 1; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int l = 1; l <= i - 1; l++)
        {
            cout << a << " ";
            a--;
        }
        cout << endl;
    }

    return 0;
}
