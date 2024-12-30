/*
Ques : WAP to print sum of digits of a given
number.
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int sum = 0, digit;
    while (n>0)
    {
        digit = n % 10;
        sum += digit;
        n /= 10;
    }
    cout<<"sum of digit: "<<sum<<" "<<endl;
    return 0;
}