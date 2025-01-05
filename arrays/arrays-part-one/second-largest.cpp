#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n], max, smax;
    cout << "enter elements of array: ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    max = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {   
            max = arr[i];
        }
    }
    smax = INT_MIN;
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]!=max && smax<arr[i]) smax = arr[i];
        
    }
    cout << "largest value out of all element: " << max << endl;
    cout << "second largest value out of all element: " << smax << endl;
    return 0;
}