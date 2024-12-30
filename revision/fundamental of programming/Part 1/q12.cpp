/*
Ques : Write a program to check whether a
given character is a vowel or a consonant.
*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter an alphabet: ";
    cin>>ch;
    if(ch=='A'|| ch=='E' || ch == 'I' || ch == 'O' || ch == 'U' || ch=='a'|| ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u')cout<<ch<<" is a vowel"<<endl;
    else cout<<ch<<" is a constent"<<endl;
    return 0;
}