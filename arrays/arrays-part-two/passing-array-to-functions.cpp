#include <iostream>
using namespace std;
// int a[] == int *a;
void display(int a[], int size)
{                                  // arr[empty] - empty rakhte hain &  address of array or address of the first element recived by the fuction.
    for (int i = 0; i < size; i++) // use of size variable.
    {
        cout << a[i] << " "; // a is pointing toward array x which exist in main function if we change anything in a it will reflact in x;
    }
    cout << endl;
}
void change(int b[], int size)
{
    b[0] = 10000; // b is pointing toward array x which exist in main function if we change anything in b it will reflact in x;
}
int main()
{
    int x[] = {1, 2, 3, 5, 78};
    int size = sizeof(x) / sizeof(x[0]);
    // accessing the element of array in another function.
    // updation, passing by reference.
    display(x, size); // address of array or address of the first element pass to fuction.
    change(x, size);
    display(x, size);
    return 0;
}