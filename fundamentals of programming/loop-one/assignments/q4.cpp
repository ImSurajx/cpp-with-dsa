// display this ap 4,7,10,13,16 upto n terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int a = 4;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        a+=3;
    }
    
    return 0;
}