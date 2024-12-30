/*
Take 2 integers input and print the greatest of them
Input 1: a = 5 b = 7
Output 1: second number 7 is the largest.
Input 2: a = 12 b = 1
Output 2 : first number 12 is the largest.
Note : It is ensured that the two numbers will be different.
*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"enter 1st integer: ";
    cin>>x;
    cout<<"enter 2nd integer: ";
    cin>>y;
    if(x>y){
        cout<<"first number " <<x<< " is largest.";
    } else{
        cout<<"second number " <<y<< " is largest.";
    }
    return 0;
}