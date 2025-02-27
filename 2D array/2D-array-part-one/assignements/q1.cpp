/*
Ques: Write a program to add two matrices and save the result in one of the given matrices.
Input 1:
1 2 3
4 5 6
7 8 9

Input 2:
4 5 8
0 0 8
1 2 0

Output 1:
5 7 11
4 5 14
8 10 9
*/

#include<iostream>
using namespace std;
int main(){
    int m, n;
    cout<<"cout row & columns of first array: ";
    cin>>m>>n;
    int arr[m][n];
    // taking input in first array;
    cout<<"enter elements of first array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int arr2[m][n];
    // taking input in first array;
    cout<<"enter elemetnts of second array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr2[i][j];
        }
        
    }
    // displaying array:
    cout<<"first array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"second array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }

    /*
    calculating sum of 2 array & storing into existing array:
    note: order of matrics must be same else sum is note possible
    like  arr1 = 3x4 then arr2 must be = 3x4;
    */
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = arr[i][j] + arr2[i][j];
        }
        
    }
    // sum of array:
    cout<<"sum of array: "<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}