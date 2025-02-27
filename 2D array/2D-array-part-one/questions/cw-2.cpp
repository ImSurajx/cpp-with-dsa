// Ques: wap to find the smallest element of a given 2D array to integers.
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
    int min = INT_MAX;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }
    cout << "smallest element of array is: " << min << endl;
}