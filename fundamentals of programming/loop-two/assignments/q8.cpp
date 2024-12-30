// Print first ‘n’ fibonacci numbers.
#include<iostream>
using namespace std;
int main(){
    int num, a = 1, b = 1, sum = 0;
    cout<<"enter a number: ";
    cin>>num;
    cout<<a<<" ";
    cout<<b<<" ";
    for(int i = 1; i<=num-2; i++){
        sum = a + b;
        cout<<sum<<" ";
        a = b;
        b = sum;
    }
    return 0;
}