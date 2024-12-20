// q5. take positive integer input and tell if it is divisible by 5 & 3.
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    if(x%3==0 && x%5==0){
        cout<<"the following number is divisible by 5 & 3.";
    } else{
        cout<<"the following number is not divisible by 5 & 3.";
    }
    return 0;
}