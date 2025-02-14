/*
Q3: Find the output of the following code snippet.
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;
cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;
11 11 10
10 10 10
11 10 11 --> correct
10 11 10
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;
    int *ptr = &a; // 10
    b = *ptr + 1;  // 11
    ptr = &b;      // 11
    cout << *ptr << " " << a << " " << b << endl;
    return 0;
}