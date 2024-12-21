// q5. display this gp: 1,2,4,8,16,32 upto 'n' terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter nth term of gp: ";
    cin>>n;
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        cout<<a<<" ";
        a *= 2;
    }
    
    return 0;
}