/*
Ques : Find the second largest element in the given
Array.
*/
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size of an array: ";
    cin >> size;
    int arr[size];
    cout << "ente elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    int smax = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != max && smax < arr[i])
            smax = arr[i];
    }
    cout << "maximum value out of all elements: " << max << endl;
    cout << "second maximum value out of all elements: " << smax << endl;
    return 0;
}