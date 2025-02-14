/*
Ques : Rotate the given array ‘a’ by k steps, where k is
non-negative.
Note : k can be greater than n as well where n is the
size of array ‘a’.
*/
#include <iostream>
using namespace std;

void reverse(vector<int> &arr, int i, int j)
{
    while (i <= j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cout << "enter k: ";
    cin >> k;
    if (k > n)
    {
        k %= n;
    }
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - k - 1);
    reverse(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}