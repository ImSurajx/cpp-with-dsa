// Ques : Swap 2 numbers
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    cout<<"a is: "<<a<<" & b is: "<<b<<endl;
    swap(&a,&b);
    cout<<"after swaping value of a & b: "<<endl;
    cout<<"a is: "<<a<<" & b is: "<<b<<endl;
    return 0;
}