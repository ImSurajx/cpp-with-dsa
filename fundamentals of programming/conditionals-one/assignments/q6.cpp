/*
If the marks of A, B and C are input through the keyboard, write a program to determine the student
scoring the least marks.
Input 1: A = 23 , B = 34 , C = 71
Output : ‘A’ has the least marks.
*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout << "enter A: ";
    cin >> a;
    cout << "enter B: ";
    cin >> b;
    cout << "enter C: ";
    cin >> c;
    if(a<b && a<c){
        cout<<"A have the least marks"<<endl;
    } else if(b<a && b<c){
        cout<<"B have the least marks"<<endl;
    } else{
        cout<<"C have the least marks"<<endl;
    }
}