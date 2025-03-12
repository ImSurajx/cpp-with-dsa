/*
Write a program to print the elements of both the diagonals in a square matrix.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side of square matrix: ";
    cin >> n;
    int arr[n][n];
    // taking input
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // displaying array:
    cout << "elments are: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // displaying diagonals of matrix:
    cout << "daigonal: " << endl;
    for (int i = 0; i < n; i++)
    {
        int l = i;
        for (int j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}