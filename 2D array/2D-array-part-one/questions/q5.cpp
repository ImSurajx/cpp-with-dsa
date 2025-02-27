/*
Ques: wap to print transpose of the matrix entered by user
and store it in a new matrix.
*/
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
    // printing transpose (column wise printing)
    cout<<"transpose is: "<<endl;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

