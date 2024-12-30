/*
write a functions to that takes the radius of a circle as an argument and return it's area.
*/
#include<iostream>
using namespace std;
int area(int r){
    return 3.1415 * r * r;
}
int main(){
    int r;
    cout<<"enter radius: ";
    cin>>r;
    cout<<"area is: "<<area(r)<<endl;
    return 0;
}