/*
Check it the given array is sorted or not
*/
#include <iostream>
using namespace std;
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
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag == false)
    {
        cout << "array is not sorted. " << endl;
    }
    else
    {
        cout << "array is sorted." << endl;
    }
    return 0;
}