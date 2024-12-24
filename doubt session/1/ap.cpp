// 1,11,111,1111 n terms;
#include<iostream>
using namespace std;
int main(){
    int a = 1;
    int n;
    cout<<"enter a number: ";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        a *= 10;
        a += 1;
    }
    
    return 0;
}