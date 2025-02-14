// WAP to find the difference between ASCII of two characters ,take them as input .
#include<iostream>
using namespace std;
int main(){
    char ch1, ch2;
    cout<<"enter 1st character: ";
    cin>>ch1;
    cout<<"enter 2nd character: ";
    cin>>ch2;
    cout<<"diffrence b/w ascii of these character is: "<<int(ch1) - int(ch2)<<endl;
    return 0;
}