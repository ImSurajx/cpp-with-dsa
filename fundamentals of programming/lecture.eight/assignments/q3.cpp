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

        // for 1st digits
        int a = i;
        for (int l = 1; l <= i-1; l++)
        {
            cout<<char(a+64)<<" ";
            a--;
        }
        
        // for numbers
        for (int k = 1; k <= nst; k++)
        {
            cout<<char(k+64)<<" ";
        }
        nst++;
        cout<<endl;
    }
    
}