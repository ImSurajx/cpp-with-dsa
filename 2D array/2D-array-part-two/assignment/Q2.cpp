/*
Write a program to rotate the matrix by 90 degrees anti-clockwise.
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m;
    cout << "enter sides of matrix: ";
    cin >> m;
    int arr[m][m];

    // taking input
    cout << "enter elements of array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // displaying array:
    cout << "elments are: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // rotating 2d array by 90 degree in anticlock direction.

    // transposing the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
        cout << endl;
    }

    // outer loop column
    for (int k = 0; k < m; k++)
    {
        // reverse the kth columns
        int i = 0;
        int j = m - 1;
        while (i < j)
        {
            swap(arr[i][k], arr[j][k]);
            i++;
            j--;
        }
    }

    cout << "rotation are: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}