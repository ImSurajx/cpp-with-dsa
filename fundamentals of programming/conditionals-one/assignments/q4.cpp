/*
Given the length and breadth of a rectangle, write a program to find whether numerically the area of
the rectangle is greater than its perimeter.
Input 1: length = 5 breadth = 7
Output 1: Area is greater than perimeter.
*/
#include<iostream>
using namespace std;
int main(){
    int area, perimeter, length, bredth;
    cout<<"enter length of rectangle: ";
    cin>>length;
    cout<<"enter bredth of rectangle: ";
    cin>>bredth;
    area = length * bredth;
    perimeter = 2 * (length + bredth);
    if(area>perimeter){
        cout<<area<<" unit2"<<endl;
        cout<<"area of rectangle is large as compared to perimeter"<<endl;
    } else{
        cout<<perimeter<<" unit"<<endl;
        cout<<"perimeter of rectangle is large as compared to area"<<endl;
    }
    return 0;
}