// find the second largest element in the given array in one pass;
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, max = INT_MIN, smax = INT_MIN;
    cout << "enter number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    cout << "second largest number in following array: " << smax << endl;
    return 0;
}