/*
Print the following pattern
Sample Input : m = 4, n = 6
Sample Output :
******
*    *
*    *
******
*/
#include<iostream>
using namespace std;
int main(){
    int side;
    cout<<"enter a number: ";
    cin>>side;
    for (int i = 1; i <= side; i++)
    {
        for (int j = 1; j < (side-i)+1; j++)
        {
            cout<<"  ";
        }
        

        for (int k = 1; k <= side; k++)
        {
            cout<<"* ";
            
            
        }
        cout<<endl;
        
    }
    
    return 0;
}