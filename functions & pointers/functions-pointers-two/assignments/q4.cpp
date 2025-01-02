/*
Q4: Find the output of the following code snippet.
int a = 15, b = 20;
int *ptr = &a;
int *ptr2 = &b;
*ptr = *ptr2;
ptr now points to b 
ptr2 now points to a
a gets value of b --> correct
b gets value of a
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 15, b = 20;
    int *ptr = &a;
    cout << *ptr <<endl;
    int *ptr2 = &b;
    cout << *ptr2 << endl;
    *ptr = *ptr2;
    cout<< *ptr <<endl;
}