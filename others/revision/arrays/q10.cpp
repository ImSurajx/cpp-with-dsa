// Ques : Rotate the given array ‘a’ by k steps, where k is
// non-negative.
#include <iostream>
using namespace std;

// for taking input:
void input(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}

// for displaying arrays:
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// revrsing array:
void reverse(int i, int j, vector<int> &arr)
{
    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    cout << "enter elements of array: ";
    vector<int> arr;
    input(arr, n);
    cout << "elements are: ";
    display(arr);
    int k;
    cout << "enter k: ";
    cin >> k;
    if (k > n)
    {
        k %= n;
    }

    // reversing k times.
    reverse(0, n - k - 1, arr);
    reverse(n - k, n - 1, arr);
    reverse(0, n - 1, arr);
    cout << "current array: ";
    display(arr);
    return 0;
}