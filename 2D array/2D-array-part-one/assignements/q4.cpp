/*
Q4: Write a C++ program to find the largest element of a given 2D array of integers.
Input 1:
1 3 4 6
2 4 5 7
3 5 6 8
4 6 7 9
Output 1: 9
*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m;
    cout << "enter columns:  ";
    cin >> m;
    int n;
    cout << "enter rows:  ";
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
            // checking max also with printing
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "max is: " << max << endl;

    return 0;
}