// Ques : Take float input and print the fractional part of the real number.
#include<iostream>
using namespace std;
int main(){
    float number;
    cout<<"enter a number: ";
    cin>>number;
    if(number >= 0){
        cout<<number - int(number);
    } else{
        cout<<number - int(number)+1;
    }
    
    return 0;
}