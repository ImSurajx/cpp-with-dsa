/*
Ques : Print the given pattern
        * 
      * * * 
    * * * * * 
  * * * * * * * 
* * * * * * * * * 
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side: ";
    cin >> n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k < (n - i) + 1; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= (2*i)-1; j++)
        {
            cout << "* ";
            
        }
        cout << endl;
    }

    return 0;
}