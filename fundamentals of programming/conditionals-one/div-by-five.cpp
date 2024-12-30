//q2. take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter a number: ";
    cin>>x;
    if(x%5==0){
        cout<<"following number is divisible by 5.";
    } else{
        cout<<"following number is not divisible by 5.";
    }
    return 0;
}