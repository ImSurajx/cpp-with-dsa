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
        for (int k = 1; k <= a; k++)
        {
            cout<<"* ";
        }
        a += 2;
        cout<<endl;
    }
    a = (n*2)-3;
    for (int i = 1; i <= n-1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"  ";
        }
        for (int k = 1; k <= a; k++)
        {
            cout<<"* ";
        }
        a-=2;
        cout<<endl;
        
    }
    
    
    return 0;
}