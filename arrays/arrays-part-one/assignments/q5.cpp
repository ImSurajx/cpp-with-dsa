// wap to find the smallest missing positive element  in the shorted array  that only contains positive elements.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

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
}