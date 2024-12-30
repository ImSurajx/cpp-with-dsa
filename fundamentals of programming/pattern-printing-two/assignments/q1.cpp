#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int nsp = n-1, nst = 1;
    for (int i = 1; i <= n; i++)
    {
        // for spaces
        for (int j = 1; j <= nsp; j++)
        {
            cout<<"  ";
        }
        nsp--;
        // for numbers
        for (int k = 1; k <= nst; k++)
        {
            cout<<k<<" ";
        }
        nst+=2;
        cout<<endl;
    }
    
}