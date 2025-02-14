/*
write a function to print square of first n natural numbers, taking n as argument of functions. 
*/
#include<iostream>
using namespace std;

int square(int num){
    return num * num;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<"square of first "<<n<<" numbers: ";
    for (int i = 1; i <= n; i++)
    {
        cout<<square(i)<<" ";
    }
    cout<<endl;
    return 0;
}