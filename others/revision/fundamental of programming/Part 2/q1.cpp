/*
WAP to check if a number is prime or
not.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    bool flag = false;
    for (int i = 2; i <= n-1; i++)
    {
        if(n%i==0){
            flag = true;
            break;
        }
    }
    if(flag == false) cout<<"prime number.";
    else cout<<"coprime number.";
    return 0;
}