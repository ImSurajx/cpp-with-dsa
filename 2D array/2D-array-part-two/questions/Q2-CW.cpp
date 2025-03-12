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
    for (int j = 0; j < m; j++)
    {
        if (j % 2 != 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
        }

        cout << endl;
    }
    return 0;
}