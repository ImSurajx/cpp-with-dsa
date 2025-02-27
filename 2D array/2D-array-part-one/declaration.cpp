#include <iostream>
using namespace std;
int main()
{
    // rows --> 3, 0-2;
    // columns --> 3, 0-2;
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr[][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // possible
    int arr[3][] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // not possible
    cout << arr[0][0] << endl;
    return 0;
}