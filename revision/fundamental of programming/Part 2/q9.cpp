/*
Two numbers are entered through the
keyboard. Write a program to find the value of one
number raised to the power of another.
*/
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter value of m raise to power n."<<endl;
    cout<<"enter m: ";
    cin>>m;
    cout<<"enter n: ";
    cin>>n;
    int power = 1;
    for (int i = 1; i <= n; i++)
    {
        power *= m;
    }
    cout<<"m raise to power n: "<<power<<endl;
    return 0;
}