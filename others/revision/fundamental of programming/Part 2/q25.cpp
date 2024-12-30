#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<k<<" ";
        }
        int m = i-1;
        for (int l = 1; l < i; l++)
        {
            cout<<m<<" ";
            m--;
        }
        
        a += 2;
        cout<<endl;
        
    }
    
    return 0;
}