#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], max;
    cout << "enter elements of array: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "maximum value out of all element: " << max << endl;
    return 0;
}