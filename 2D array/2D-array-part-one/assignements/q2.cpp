/*
Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[5][5];
    cout<<"array is: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 10;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}