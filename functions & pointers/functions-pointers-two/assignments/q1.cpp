// Q1 : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int product(int *ptr1, int *ptr2){
    return (*ptr1) * (*ptr2);
}
int main(){
    int a, b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    cout<<"Prodcut of two pointers will be: "<<product (ptr1,ptr2)<<endl;
}