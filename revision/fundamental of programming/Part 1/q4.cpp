/*
Ques : If cost price and selling price of an item is
input through the keyboard, write a program to
determine whether the seller has made profit or
incurred loss. Also determine how much profit he
made or loss he incurred.
*/

#include<iostream>
using namespace std;
int main(){
    int cost,sell,loss;
    cout<<"enter cost price: ";
    cin>>cost;
    cout<<"enter selling price: ";
    cin>>sell;
    if(cost>sell){
        cout<<"loss of: "<<sell-cost<<endl;
    }else{
        cout<<"profit of:"<<sell-cost<<endl;
    }

    
}