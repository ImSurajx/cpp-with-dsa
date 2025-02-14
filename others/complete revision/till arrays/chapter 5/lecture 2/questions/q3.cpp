/*
Ques : Write a program to copy the contents of one
array into another in the reverse order.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    vector<int> arr2;
    int j = n - 1;
    for (int j = n - 1, i = 0; j >= 0; j--, i++)
    {
        int x = arr[j];
        arr2.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    return 0;
}