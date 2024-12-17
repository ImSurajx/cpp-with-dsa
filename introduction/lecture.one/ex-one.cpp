// example: take two integer input a and b: a>b, and find the remainder when a is divided by b.
#include<iostream>
using namespace std;
int main(){
    // find remainder
    // davidend = divisor * quotient + remainder
    // remainder =  divident  - divisor * quotient
    int a = 10, b = 3, r;
    int q = a/b;
    // modulus operator
    // help to find remainder
    // if a<b then a%b = a
    // a%(-b) = a%b
    // (-a)%b = -(a%b)
    r = a % b;
    r = a - b*q;
    cout<<r<<endl;
    return 0; 
}