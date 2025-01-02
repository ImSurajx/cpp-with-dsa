#include<iostream>
using namespace std;
int main(){
    int x;
    int *p = &x;
    cout<<"enter first num: ";
    cin>>*p;
    cout<<*p<<endl;
}