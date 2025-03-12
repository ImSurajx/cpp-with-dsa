/*
Ques: wap to print the multiplication of two matrices given by the user.
*/
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "enter rows & columns of 1st matrix: ";
    cin >> m >> n;
    int p, q;
    cout << "enter rows & columns of 2nd matrix: ";
    cin >> p >> q;

    if (n == p)
    {
        int arr1[m][n];
        cout << "enter element of 1st matrix: ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
            }
        }

        int arr2[p][q];
        cout << "enter element of 2nd matrix: ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
        }

        // resultant matrix
        int arr[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                arr[i][j] = 0;
                // multiply
                for (int k = 0; k < p; k++)
                {
                    arr[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        // printing
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "the matrices can not be multiplied." << endl;
    }
    return 0;
}