/*
Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
elements of middle row and the elements of middle column.
[Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]
Input 1:
1 2 3 4 5
3 4 5 6 7
7 6 5 4 3
8 7 6 5 4
1 2 3 8 0
Output 1:
    3
    5
7 6 5 4 3
    6
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "note: rows == columns & must be a odd number" << endl;
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
            if (i == m / 2 || j == n / 2)
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