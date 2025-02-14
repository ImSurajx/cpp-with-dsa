/*
Q4: Find the output of the following code snippet.
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;
ptr now points to b
ptr2 now points to a
a gets value of b
b gets value of a
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;  // 15
    int *ptr2 = &b; // 20
    *ptr = *ptr2;   // 20
    cout << *ptr << endl;
    cout << *ptr2 << endl;
    // solution: 20 20;
    return 0;
}