/*
Ques : Take 3 numbers input and tell if they
can be the sides of a triangle.
*/
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three sides of triangle: ";
    cin>>a>>b>>c;
    if((a+b>c)&& (b+c>a) && (c+a>a))cout<<"it's a triangle."<<endl;
    else cout<<"not a triangle."<<endl;
    return 0;
}