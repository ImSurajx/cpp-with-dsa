/*
Calculate the product of all the elements in the given array.
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
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout << "product of array elements: " << product << endl;
    return 0;
}