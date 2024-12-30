/*
Print the factorial of a given number ‘n’.A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    int factorial = 1;
    while (n>0)
    {
        factorial *= n;
        n--;
    }
    cout<<"factorial will be: "<<factorial<<" "<<endl;
    return 0;
}