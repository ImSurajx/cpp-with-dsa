// Ques: wap to find the second largest element of a given 2D array to integers.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cout << "enter number of rows & columns: ";
    cin >> m >> n;
    int arr[m][n];
    // taking input in 2d array.
    cout << "enter elements of 2D array: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "elements are: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    int max = INT_MIN, smax = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != max && arr[i][j] > smax)
                smax = arr[i][j];
        }
    }
    cout << "largest element of array is: " << max << endl;
    cout << "second largest element of array is: " << smax << endl;
}