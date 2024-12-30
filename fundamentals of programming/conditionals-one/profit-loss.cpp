// q4. if cost price and selling price of an item input through the keyboard, wap to determine whether the seller has made profit or incurred loss. also determine how much profit he made or loss he incurred.
#include<iostream>
using namespace std;
int main(){
    int cost, sell;
    cout<<"enter cost price of product: ";
    cin>>cost;
    cout<<"enter selling price of product: ";
    cin>>sell;
    if(sell>cost){
        cout<<"seller made profit of: "<<sell-cost<<endl;
    } else if(cost>sell){ 
        cout<<"seller made losst of: "<<cost-sell<<endl;
    } else{
        cout<<"no profit & no loss."<<endl;
    }
    return 0;
}