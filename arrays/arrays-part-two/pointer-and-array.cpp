#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr; // array ke first element ka address store kar diya.
    // *ptr ager mene first element ka address de diya iska mtlb hain ki mene
    // pointer ko pure array ka access de diya hain
    // using pointers we can use modify or update array.
    cout << ptr << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " "; // printing array using pointers.
        ptr[i]++;              // updating array using pointers.
    }
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " "; // printing array using pointers.
    }
    return 0;
}