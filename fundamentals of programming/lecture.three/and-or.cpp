// logical and & logical or.
// && - both condition must be true.
// || - any one condition must be ture.
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    if(x>=100 && x<1000){
        cout<<"it's a three digit number.";
    } else{
        cout<<"not a three digit number. ";
    }
    return 0;
}