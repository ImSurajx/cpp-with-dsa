/*
WAP to find the smallest missing positive element in the sorted Array that contains only
positive elements.
*/
#include <iostream>
#include <vector>
using namespace std;
void sorted(vector<int> &arr)
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
    cout << "current elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    sorted(arr);
    cout << "sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int x = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            x++;
        }
        else
            break;
    }
    cout << "missing smallest positive number: " << x << endl;
    return 0;
}