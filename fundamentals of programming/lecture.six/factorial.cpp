#include<iostream>
using namespace std;
int main(){
    int num, factorial = 1,digit;
    cout<<"enter a number: ";
    cin>>num;
    int a = num;
    while(num>0){
        factorial *= num;
        num -= 1;
    }
    cout<<"factorial is: "<<factorial<<endl;
    return 0;
}