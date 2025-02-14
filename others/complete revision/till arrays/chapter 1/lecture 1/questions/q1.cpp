// Example : Take two integers input, a and b : a>b, and find the
// remainder when a is divided by b.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter 1st number: ";
    cin >> n;
    int m;
    cout << "enter 2nd number: ";
    cin >> m;
    cout << "remainder of a & b when (a>b): " << n % m << endl;
    return 0;
}