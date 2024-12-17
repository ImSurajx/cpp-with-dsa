#include<iostream>
using namespace std;
int main(){
    float x,z;
    cout<<"enter a real number: ";
    cin>>x;
    int y = int(x);
    cout<<"fractional part of the number is: "<<x-y<<endl;
    return 0;
}