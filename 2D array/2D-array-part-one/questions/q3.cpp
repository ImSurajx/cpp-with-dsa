// Ques: wap to find to print sum of all the elements of a 2D matrix
#include <iostream>
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
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum+= arr[i][j];
        }
    }
    cout << "sum of all elements: " <<sum<< endl;
}