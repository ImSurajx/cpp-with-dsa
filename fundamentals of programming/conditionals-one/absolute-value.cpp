// q3. give an integer, print the absolute value of that integer
#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number: ";
    int x;
    cin>>x;
    if(x<=0){
        cout<<"absolute value: "<<-x<<endl;
    } else{
        cout<<"absolute value: "<<x<<endl;
    }
    return 0;
}