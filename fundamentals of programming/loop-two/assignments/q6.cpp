// WAP to print the sum of a given number and its reverse.
#include<iostream>
using namespace std;
int main(){
    int num, digit, store = 0;
    cout<<"enter a number: ";
    cin>>num;
    int real = num;
    for(int i = 1; num>0; i++){
        store *= 10;
        digit = num % 10;
        store += digit;
        num /= 10;
    }
    cout<<"number + reverse number: "<<store + real<<endl;
    return 0;
}