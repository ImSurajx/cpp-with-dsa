#include<iostream>
using namespace std;
int main(){
    int a,b, power = 1;
    cout<<"enter a raise to power b: ";
    cin>>a>>b;
    for(int i = 1; i<= b; i++){
        power *= a;
    }
    cout<<"a raise to power b is: "<<power<<endl;
    return 0;
}