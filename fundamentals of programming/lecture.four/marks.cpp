/*
given the marks of the student. if the marks are greater than 33 print the result as pass otherwise fail without using if-else statement. 
*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your marks: ";
    cin>>a;
    a>33? cout<<"pass"<<endl: cout<<"fail"<<endl;
    return 0;
}