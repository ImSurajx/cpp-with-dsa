#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "enter number of rows: ";
    cin >> m;
    int n;
    cout << "enter number of columns: ";
    cin >> n;
    int arr[m][n];
    cout << "enter elements of array: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "elements of array: " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}