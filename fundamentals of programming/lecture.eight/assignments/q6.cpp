#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for (int j = 1; j <= n; j++)
        {
            if(i==j)cout<<"* ";
            else cout<<"  ";
        }
        for (int k = n-1; k > 0; k--)
        {
            if(k==i)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
        
    }
    return 0;
}