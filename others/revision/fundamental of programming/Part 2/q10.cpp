#include<iostream>
using namespace std;
int main(){
    int n, m;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"enter a number: ";
    cin>>m;
    // rectangle
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}