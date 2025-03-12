/*
Write a program to print the matrix in wave form.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter sides of matrix: ";
    cin >> n;
    int arr[n][n];
    // taking input into matrix
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // displaying the matrix:
    cout << "matrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // transposing matrix:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            for (int k = 0; k < n; k++)
            {
                int j = 0;
                int l = n - 1;
                while (j < l)
                {
                    int temp = arr[k][l];
                    arr[k][l] = arr[k][j];
                    arr[k][j] = temp;
                    j++;
                    l--;
                }
            }
        }
    }
    // wave look like:
    cout << "wave look like: " << endl;
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