#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], x;
    int count = 0;
    cout << "enter element you want check: ";
    cin >> x;
     cout << "enter array elements: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        if (arr[i] > x)
            count++;
    }

    cout << "the number of element greater than: " << count << " " << endl;

    return 0;
}