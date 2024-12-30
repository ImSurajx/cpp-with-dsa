/*
Ques : Write a program to check whether a
character is an alphabet or not.
*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter a character: ";
    cin>>ch;
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
    {
        cout<<ch<<" is a alphabet."<<endl;
    } else{
        cout<<ch<<" is not a alphabet."<<endl;
    }
    return 0;
}