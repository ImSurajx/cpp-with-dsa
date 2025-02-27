/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Algorithm:
1. create a nxn array like --> arr

2. tranpose the existing array without creating new array like by swaping

hint --> j will start from i+1

3. final step: reverse the existing row values of array using swap.

hint --> consider a new variable k for rows & i & j for accesing or swaping the values

like: 

int temp = arr[k][j];
arr[k][j] = arr[k][i];
arr[k][i] = temp;

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of matrix: ";
    cin >> n;
    int arr[n][n];
    // taking input:
    cout << "enter elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // displaying array:
    cout << "elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    /*
    Rotating the existing array by 90s Degree
    note: array must be nxn
    */
    // transpose of existing array
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // transposed array:
    cout << "transpose is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // rotating array:
    for (int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
        }
    }
    // 90s degree rotated clock wise:
    cout << "array after rotation: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}