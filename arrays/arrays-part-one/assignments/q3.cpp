// find the minimum value out of all elements in the array.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, min = INT_MAX;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "the minimum value out of all elements: " << min << endl;
    return 0;
}