// Ques : Take float input and print the fractional part
// of the real number.
#include<iostream>
using namespace std;
int main(){
    float num;
    cout<<"enter a number: ";
    cin>>num;
    float fractional;
    if (num>0)
    {
        fractional = num - int(num);
    }else if(num<0){

        fractional = num - int(num)+1;
    }else fractional = 0;
    cout<<"fractional part is: "<<fractional<<endl;
    return 0;
}