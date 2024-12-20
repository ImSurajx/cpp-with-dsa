// q13. take 3 numbers input and tell if they can be the sides of a triangle.
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"enter three side of triangle one bye one: ";
    cin>>a>>b>>c;
    if ((a+b>c) && (b+c>a) && (c+a>b) )
    {
        cout<<"these are the sides of triangle. ";
    } else{
        cout<<"these are not the sides of triangle. ";
    }
    
    return 0;
}