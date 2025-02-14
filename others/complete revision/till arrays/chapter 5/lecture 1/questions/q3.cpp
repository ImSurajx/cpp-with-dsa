/*
Ques : Calculate the sum of all the elements in the
given array.
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
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    cout << "sum of array elements: " << sum << endl;
    return 0;
}