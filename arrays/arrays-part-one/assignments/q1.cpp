// Calculate the product of all elements in the given array.
#include <iostream>
using namespace std;
int main()
{
    int n, product = 1;
    cout << "enter number of elements in array: ";
    cin >> n;
    int a[n];
    cout << "enter elemets of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        product *= a[i];
    }
    cout << "Product of elemet: " << product << endl;
    return 0;
}