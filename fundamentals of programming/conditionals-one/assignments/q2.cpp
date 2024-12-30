/*
Given the radius of the circle, predict whether numerically the area of this circle is larger than the
circumference or not.
Input 1: radius = 4
Output 1: Area is greater than circumference.
Explanation: area = 3.14 * 4 * 4 = 50.24 unit2
Perimeter = 2 * 3.14 * 4 = 25.12 unit
Therefore area > perimeter.
*/
#include<iostream>
using namespace std;
int main(){
    int area, circumference, radius;
    cout<<"enter radius of circle: ";
    cin>>radius;
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    if(area>circumference){
        cout<<area<<" unit2"<<endl;
        cout<<"area of circle is large as compared to circumference"<<endl;
    } else{
        cout<<circumference<<" unit"<<endl;
        cout<<"circumference of circle is large as compared to area"<<endl;
    }
    return 0;
}