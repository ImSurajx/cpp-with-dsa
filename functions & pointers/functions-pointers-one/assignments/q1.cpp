/*
write a functions to print square of first n natural numbers, taking n as argument to the functions.
*/
#include<iostream>
using namespace std;
int square(int x){
    return x * x;
}
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    cout<<"square is: "<<square(n)<<endl;
    return 0;
}