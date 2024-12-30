// Ques : Take positive integer input and tell if it
// is a three digit number or not.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    if(num>99 && num<1000){
        cout<<"3 digit number."<<endl;
    } else{
        cout<<"invalid input."<<endl;
    }
}