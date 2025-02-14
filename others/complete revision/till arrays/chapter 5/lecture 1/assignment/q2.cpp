/*
Find the second largest element in the given Array in one pass.
*/
#include <iostream>
using namespace std;

int smax(vector<int> &arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            return arr[i];
        }
    }
}
int main()
{
    int n;
    cout << "enter size of an array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    cout << "current elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "second largest elmenet in array is: " << smax(arr) << endl;
    return 0;
}