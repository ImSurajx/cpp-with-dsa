/*
wap to print the matrix in wave form.
*/
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows & columns  matrix: ";
    cin >> m >> n;
    int arr[m][n];
    // taking input
    cout << "enter elements of matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    // display
    cout << "wave form: " << endl;
    for (int i = m - 1; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            for (int j = n-1; j >= 0; j--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}