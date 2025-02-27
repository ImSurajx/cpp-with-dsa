/*
Q5: Write a program to print the row number having the maximum sum in a given matrix.
Input 1:
1 3 5 7
3 4 7 8
1 4 12 3
Output 1: 2
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m;
    cout << "enter rows:  ";
    cin >> m;
    int n;
    cout << "enter columns:  ";
    cin >> n;
    int arr[m][n];
    // taking input in 2D array:
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // displaying the 2D array:
    int max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int store = 0;
    int row_num = 0;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (store < sum)
        {
            store = sum;
            row_num = i + 1;
        }
    }
    cout << "the row number having the maximum sum: " << row_num << endl;
    return 0;
}