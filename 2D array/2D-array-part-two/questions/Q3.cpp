/*
Ques: wap to print the matrix in spiral form.
*/
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter number of rows & columns: ";
    cin >> m >> n;
    int arr[m][n];
    // taking input in 2d array
    cout << "enter elements of array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // displaying 2d array:
    cout << "array look like: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // printing spiral
    int tnt = m * n, count = 0;
    cout << "spiral look like: " << endl;
    int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
    while (minr <= maxr || minc <= maxc)
    {
        // right
        for (int i = minc; i <= maxc && count < tnt; i++)
        {
            cout << arr[minr][i] << " ";
            count++;
        }
        minr++;
        // down
        for (int j = minr; j <= maxr && count < tnt; j++)
        {
            cout << arr[j][maxc] << " ";
            count++;
        }
        maxc--;
        // left
        for (int k = maxc; k >= minc && count < tnt; k--)
        {
            cout << arr[maxr][k] << " ";
            count++;
        }
        maxr--;
        // top
        for (int l = maxr; l >= minr && count < tnt; l--)
        {
            cout << arr[l][minc] << " ";
            count++;
        }
        minc++;
    }
    return 0;
}