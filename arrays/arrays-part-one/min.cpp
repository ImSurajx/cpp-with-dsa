#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], min;
    cout << "enter elements of array: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "maximum value out of all element: " << min << endl;
    return 0;
}