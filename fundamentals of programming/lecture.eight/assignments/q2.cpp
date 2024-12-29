#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int nsp = n - 1;
    int nst = 1;
    for (int i = 1; i <= n; i++)
    {
        // for spacing
        for (int j = 1; j <= nsp; j++)
        {
           cout<<"  ";
        }
        nsp--;
        // for alphabet
        for (int l = 1; l <= nst; l++)
        {
            cout<<char(l+64)<<" ";
        }
        nst+=2;
        cout<<endl;
        
    }
    
    return 0;
}