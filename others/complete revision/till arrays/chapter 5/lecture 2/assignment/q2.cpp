/*
WAP to find the largest three elements in the array.
*/
#include <iostream>
using namespace std;
void sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    // if sorting allowed
    sort(arr);
    int max = arr[n - 1];
    int smax = arr[n - 2];
    int tmax = arr[n - 3];

    // if sorting is not allowed
    int max = INT_MIN, smax = INT_MIN, tmax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (tmax < arr[i] && smax != arr[i] && max != arr[i])
        {
            tmax = arr[i];
        }
    }
    cout << max << endl;
    cout << smax << endl;
    cout << tmax << endl;
    return 0;
}