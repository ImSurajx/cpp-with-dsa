// print the nth fibonacci number.
#include<iostream>
using namespace std;
int main(){
    int a = 1, b=1, sum = 0, num ;
    cout<<"enter a number: ";
    cin>>num;
    cout<<a<<" ";
    cout<<b<<" ";
    for (int i = 1; i <= num-2; i++)
    {
        sum = a+b;
        a = b;
        b = sum;
        cout<<sum<<" ";
    }
    return 0;
}