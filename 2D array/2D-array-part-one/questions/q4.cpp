// ques: wap to add two matrices
#include <iostream>
using namespace std;
int main()
{
    /*
    row x columns.
    order of both matrices must be same else addition is not possible.
    */
    int m, n;
    cout << "enter number of rows & columns 1st array: ";
    cin >> m >> n;
    int arr1[m][n];
    // taking input in 2d array
    cout << "enter elements of 1st 2D array: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "elements are: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    int x, y;
    cout << "enter number of rows & columns 2nd array: ";
    cin >> x >> y;
    int arr2[x][y];

    // taking input in 2nd 2d array
    cout << "enter elements of 2nd 2D array: " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << "elements are: " << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
    if (m == x && n == y)
    {
        int res[x][y];
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                res[i][j] = arr1[i][j] + arr2[i][j];
            }
        }
        cout << "sum of two matrices are: " << endl;
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < y; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "orders are not the same so sum is not possible." << endl;
    }
    return 0;
}