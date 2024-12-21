/*
Ternary Operator:
expression 1? expression 2 : expression 3
short form of if else, cool banea ke liye use karte hain.
*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    // condition? true : false
    x%2==0? cout<<"even" : cout<<"odd";
    return 0;
}