/*
Ques : Count the number of elements in given array
greater than a given number x.
*/
#include <iostream>
using namespace std;
int main()
{
    int size, count = 0;
    cout << "enter size of an array: ";
    cin >> size;
    int arr[size];
    int x;
    cout << "enter x: ";
    cin >> x;
    cout << "ente elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << "number of element greater than x: " << count << endl;
    return 0;
}