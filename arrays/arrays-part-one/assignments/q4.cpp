// Given an array, predict if the array contains duplicates or not.
#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "enter no of elements in array: ";
    cin >> n;
    cout << "enter elements of array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter element that you want to check: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    if (count > 1)
    {
        cout << "the following array contains duplicate elements." << endl;
    }
    else
    {
        cout << "doesn't contains duplicate elements. " << endl;
    }
    return 0;
}