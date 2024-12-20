// q8. take positive integer input and tell if it is divisible by 5 or 3 but not divisble by 15.
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    if(x%3==0 || x%5==0){
        if(x%15!=0)
        {
             cout<<"the following number is divisible by 5 or 3 but not by 15.";
        } else{
            cout<<"mismatched conditions";
        }
    } else{
        cout<<"mismatched conditions";
    }
    return 0;
}