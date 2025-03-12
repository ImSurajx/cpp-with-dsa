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
    int arr1[m][n];
    // taking input1
    cout << "enter elements of matrix: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr1[i][j];
        }
    }
    // display
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    // reversing odd rows
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i % 2 != 0)
            {
                int k = 0;
                int l = n - 1;
                while (k <= l)
                {
                    int temp = arr1[i][l];
                    arr1[i][l] = arr1[i][k];
                    arr1[i][k] = temp;
                    k++;
                    l--;
                }
            }
        }
    }
    // display
    cout << "wave form: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}