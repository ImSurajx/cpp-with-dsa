#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int arr[n], product = 1;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
        product *= arr[i];
    }
    cout << "product of array: " << product << endl;
    return 0;
}