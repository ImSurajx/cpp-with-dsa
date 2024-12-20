// q9: take positive integer input and tell if it is divisible by 5 and 3.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    if(num%3==0){
        if(num%5==0){
            cout<<"following number is divisible by 5 & 3.";
        } else{
            cout<<"following number is divisible by 3 but not 5 .";
        }
    } else{
        cout<<"mismatched condition";
    }
    return 0;
}