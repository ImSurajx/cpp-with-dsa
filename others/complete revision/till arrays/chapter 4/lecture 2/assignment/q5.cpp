/*
Q5: Is the following program snippet correct?
int a = 10, b = 20;
int *ptr;
*ptr = 5;
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int *ptr;
    *ptr = 5;
    cout << a << " " << b << " " << *ptr << endl;
    // error: *ptr is not pointing towards an address of variable..
}