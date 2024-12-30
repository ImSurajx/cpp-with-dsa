/*
Ques : Write a program to create a calculator that
performs basic arithmetic operations (add,
subtract, multiply and divide) using switch case
and functions. The calculator should input two
numbers and an operator from user.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"enter a equation: ";
    cin>>a>>ch>>b;
    switch (ch=='+')
    {
    case 1:
        cout<<a+b<<endl;
        break;
    }
    switch (ch=='-')
    {
    case 1:
        cout<<a-b<<endl;
        break;
    }
    switch (ch=='*')
    {
    case 1:
        cout<<a*b<<endl;
        break;
    }
    switch (ch=='/')
    {
    case 1:
        cout<<a/b<<endl;
        break;
    }
    return 0;
}