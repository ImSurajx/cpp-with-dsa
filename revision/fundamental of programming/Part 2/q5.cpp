/*
WAP to print reverse of a given
number.
*/
#include<iostream>
using namespace std;
int main(){
    int n, r = 0, digit;
    cout<<"enter a number: ";
    cin>>n;
    while(n>0){ // example n = 156
        r *= 10; // 0 * 10 = 0 | 6 * 10 = 60 | 65 * 10 = 650;
        digit = n%10; // 156 % 10 = 6 | 15 % 10 = 5 | 1 % 10 = ; 
        r += digit; // 0 + 6 = 6 | 60 + 5 = 65 | 650 + 1 = 651;
        n /= 10; // 156 / 10 = 15 | 15 / 10 = 1 | 1 / 10 = 0 loop end;
    }
    cout<<"reverse of digit: "<<r<<" "<<endl;
    return 0;
}