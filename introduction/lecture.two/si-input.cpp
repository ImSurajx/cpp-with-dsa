#include<iostream>
using namespace std;
int main(){
    int p, r, t;
    cout<<"enter principle amount: ";
    cin>>p;
    cout<<"enter rate of interest: ";
    cin>>r;
    cout<<"enter time period in year: ";
    cin>>t;
    cout<<"simple interest: "<< (p*r*t)/100 <<endl;
    return 0;
}