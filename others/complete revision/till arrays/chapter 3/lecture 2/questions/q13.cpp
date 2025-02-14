/*
Ques : Print the given pattern

          * 
        * * 
      * * * 
    * * * * 
  * * * * * 

*/
#include <iostream>
using namespace std;
int main()
{
    int side;
    cout << "enter side: ";
    cin >> side;
    int k = 1;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j <= (side - i) + 1; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
