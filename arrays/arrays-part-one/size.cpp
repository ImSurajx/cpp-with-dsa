#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 9, 7, 6, 4, 3, 24, 65, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "size of array: " << size << endl;
    return 0;
}