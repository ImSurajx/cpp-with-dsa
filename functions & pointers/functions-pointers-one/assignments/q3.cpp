/*
write a functions to that takes the radius of a circle as an argument and return it's area.
*/
#include<iostream>
using namespace std;
int odd(int a, int b){
    for (int i = a; i <= b; i++)
    {
        if (i%2!=0)
        {
            cout<<i<<" ";
        }
        
    }
    
}

int main(){
    int a;
    cout<<"enter a: ";
    cin>>a;
    int b;
    cout<<"enter b: ";
    cin>>b;
    cout<<"odd numbers between a to b: "<<odd(a,b)<<endl;
    return 0;
}