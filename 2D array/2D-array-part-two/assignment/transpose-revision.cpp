/*
finding transpose
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter sides of matrix: ";
    cin>>n;
    int arr[n][n];
    // taking input into matrix
    cout<<"enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    // displaying the matrix:
    cout<<"matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // transposing matrix:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j]; 
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            /*
            if j < n

            when i = 0 & j = 0 but j < 3
            arr[0][0] swap arr[0][0] --> 1 swap 1
            arr[0][1] swap arr[1][0] --> 2 swap 4
            arr[0][2] swap arr[2][0] --> 3 swap 7

            arr[0][0] = 1, arr[0][1] = 4, arr[0][2] = 7      
            arr[0][0] = 1, arr[1][0] = 2, arr[2][0] = 3

            when i = 1 & j = 0 but j < 3
            arr[1][0] swap arr[0][1] --> 2 swap 4;
            arr[1][1] swap arr[1][1] --> 5 swap 5;
            arr[1][2] swap arr[2][1] --> 6 swap 7;

            arr[1][0] = 4, arr[1][1] = 5, arr[1][2] = 8;
            arr[0][1] = 2, arr[1][1] = 5, arr[2][1] = 6;

            when i = 2 & j = 0 but j < 3;
            arr[2][0] swap arr[0][2] --> 3 swap 7;
            arr[2][1] swap arr[1][2] --> 6 swap 8;
            arr[2][2] swap arr[2][2] --> 9 swap 9;

            arr[2][0] = 7, arr[2][1] = 8, arr[2][2] = 9;
            arr[0][2] = 3, arr[1][2] = 6, arr[2][2] = 9;

            so final matrix will look like:
            arr[0][0] arr[0][1] arr[0][2]  --> 1 2 3
            arr[1][0] arr[1][1] arr[1][2]  --> 4 5 6
            arr[2][0] arr[2][1] arr[2][2]  --> 7 8 9

            if j<i;

            when i = 0, j = 0 but j < i;
            arr[0][0] swap arr[0][0] = 1 swap with 1

            arr[0][0] = 1;

            when i = 1, j = 0 but j < i;
            arr[1][0] swap arr[0][1] = 4 swap 2
            
            arr[1][0] = 2, arr[0][1] = 4;

            when i = 2, j = 0 but j < i;
            arr[2][0] swap arr[0][2] = 7 swap 3
            arr[2][1] swap arr[1][2] = 8 swap 6
            
            arr[2][0] = 3, arr[0][2] = 7;
            arr[2][1] = 6, arr[1][2] = 8;

            so final matrix will look like:
            arr[0][0] arr[0][1] arr[0][2]  --> 1 4 7
            arr[1][0] arr[1][1] arr[1][2]  --> 2 5 8
            arr[2][0] arr[2][1] arr[2][2]  --> 3 6 9

            */
        }
        
    }
    cout<<"transpose is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}