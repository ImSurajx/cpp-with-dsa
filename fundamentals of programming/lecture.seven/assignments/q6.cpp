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
    int r,c;
    cout<<"enter number of rows: ";
    cin>>r;
    cout<<"enter number of columns: ";
    cin>>c;
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i==1 || j == 1 || i == r || j == c) cout<<"* ";
            else cout<<"  ";
            
            
        }
        cout<<endl;
        
    }
    
    return 0;
}