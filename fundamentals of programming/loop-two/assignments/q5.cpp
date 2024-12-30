// WAP to print the sum of all the even digits of a given number.
#include<iostream>
using namespace std;
int main(){
    int num, digit, sum = 0;
    cout<<"enter a number: ";
    cin>>num;
    for(int i = 1; num>0; i++){
        digit = num%10;
        if(digit%2==0) sum +=digit;
        num /=10;
    }
    cout<<"sum of even digit: "<<sum<<endl;
    return 0;
}