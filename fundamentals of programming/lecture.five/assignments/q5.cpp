// q5. display this gp 3,12,48 upto n terms.
#include<iostream>
using namespace std;
int main(){
    int n, a = 3;
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
         cout<<a<<" ";
         a *= 4;
    }
    
    return 0;
}