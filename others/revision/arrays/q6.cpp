// Ques : Count the number of elements in given array
// greater than a given number x.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter x: ";
    int count = 0;
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << "number of elements greater than " << x << " is: " << count << endl;
    return 0;
}