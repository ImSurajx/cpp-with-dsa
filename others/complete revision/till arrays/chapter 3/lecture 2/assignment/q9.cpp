/*
Print the following pattern
Input : n = 4
Output :
          A 
        A B 
      A B C 
    A B C D 
  A B C D E 
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
        for(int k = 1; k<=(side-i)+1; k++){
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<char(j+64)<<" ";
        }
        cout << endl;
    }
}