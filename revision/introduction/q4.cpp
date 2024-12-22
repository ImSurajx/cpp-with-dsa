//Example : Calculating Simple Interest
#include<iostream>
using namespace std;
int main(){
    int p,r,t;
    cout<<"enter principle, rate & time: ";
    cin>>p>>r>>t;
    cout<<(p*r*t)/100;
    return 0;
}