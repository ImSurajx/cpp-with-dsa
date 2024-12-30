/*
Find the output for this code. let input 2 3 6
Output will be: 0
*/
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter first number: ";
    cin>>x;
    int y, m;
    cout<<"enter second number & value for taking modulo: ";
    cin>>y>>m;
    int z = (x*y)%m;
    cout<<"Output is: "<<z<<endl;
    return 0;
}