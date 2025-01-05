#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int arr[n], sum = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "sum of array: " << sum << endl;
    return 0;
}