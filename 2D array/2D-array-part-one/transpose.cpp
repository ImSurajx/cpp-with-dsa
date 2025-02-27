#include<iostream>
using namespace std;
int main(){
    int m;
    cout << "enter number of rows: ";
    cin >> m;
    int n;
    cout << "enter number of columns: ";
    cin >> n;
    int arr[m][n];
    int res[n][m];
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
            res[j][i] = arr[i][j];
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // transpose;
    cout<<"transpose is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}