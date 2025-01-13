// Write a program to calculate sum of two numbers
// using pointers.
#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout<<"enter a & b: ";
    cin>>x>>y;
    int *p = &x, *q = &y;
    cout<<"sum will be: " <<*p + *q<<endl;
    return 0;
}