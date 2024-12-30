// Ques : Take positive integer input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    if(num%5==0){
        cout<<"divisible by 5";
    } else{
        cout<<"not divisible by 5";
    }
}