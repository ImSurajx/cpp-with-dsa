#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter side of matrix: ";
    cin >> n;
    int arr[n][n];
    int minc = 0, minr = 0, maxc = n - 1, maxr = n - 1;
    int tnt = n * n;
    int count = 0;
    while (minr <= maxr && minc <= maxc)
    {
        // right
        for (int i = minc; i <= maxc && count < tnt; i++)
        {
            cin >> arr[minr][i];
            count++;
        }
        minr++;
        // down
        for (int j = minr; j <= maxr && count < tnt; j++)
        {
            cin >> arr[j][maxc];
            count++;
        }
        maxc--;
        // left
        for (int k = maxc; k >= minc && count < tnt; k--)
        {
            cin >> arr[maxr][k];
            count++;
        }
        maxr--;
        // top
        for (int l = maxr; l >= minr && count < tnt; l--)
        {
            cin >> arr[l][minc];
            count++;
        }
        minc++;
    }
    cout << "array look like: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}