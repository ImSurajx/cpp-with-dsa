// Q1. take an integer as input & give output as odd & even.
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"even number."<<endl;
    } else {
        cout<<"odd number."<<endl;
    }
    return 0;
}