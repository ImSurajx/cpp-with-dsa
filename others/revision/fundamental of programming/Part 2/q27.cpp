#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int a = 1;
    for (int i = 1; i <= (n*2)-1; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    int b;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout<<j<<" ";
            b = j;
        }
        for (int k = 1; k <= a; k++)
        {
            cout<<"  ";
            b++;
            
        }
        a+=2;
        for (int l = 1; l <= n - i; l++)
        {
            cout<<b<<" ";
            b++;
        }
        
        cout<<endl;
    }
    
    return 0;
}