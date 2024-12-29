#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int nsp = 1;
    int a = n/2 + 1;
    for(int i = 1; i<= 1; i++){
        for(int j = 1; j<= n; j++){
            cout<<j<<" ";
        }
        for (int k = n-1; k > 0 ; k--)
        {
            cout<<k<<" ";
        }
    }
    cout<<endl;
    for (int i = 1; i <= n-1; i++)
    {
        int a = 1;
        for(int j = 1; j<= n-i; j++){
            cout<<j<<" ";
            a = j;
        }
        for(int k = 1; k<= nsp; k++){
            cout<<"  ";
        }
        nsp+=2;
        for(int l = 1; l<=n-i; l++){
            cout<<a<<" ";
            a--;
        }
        cout<<endl;
    }
    
    return 0;
}