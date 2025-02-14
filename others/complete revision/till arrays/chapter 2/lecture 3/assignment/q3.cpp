/*
Print the table of n Here n is an integer which user will input.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n*i<<endl;
    }
    
    return 0;
}