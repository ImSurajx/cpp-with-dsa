/*
Given three points (x1, y1), (x2, y2) and
(x3, y3), write a program to check if all the three points fall on one straight line.
Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
Output 1: All 3 points lie on the same line.
*/
#include<iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3, area;
    cout << "enter value of x1: ";
    cin >> x1;
    cout << "enter value of y1: ";
    cin >> y1;
    cout << "enter value of x2: ";
    cin >> x2;
    cout << "enter value of y2: ";
    cin >> y2;
    cout << "enter value of x3: ";
    cin >> x3;
    cout << "enter value of y3: ";
    cin >> y3;
    /*
    by using area of triangle.
    */
    area = 1/2 * ( (x1*(y1-y2)) + (x2 * (y3-y1)) + (x3 * (y1-y2)) );
    cout<<area<<endl;
    if(area == 0){
        cout<<"the cordinates fall on a staright line.";
    } else{
        cout<<"the cordinates doesn't fall on a staright line.";
    }
}
