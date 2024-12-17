// Find the output for this code. Let input:- 3 2
// output is: 1 1
#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter first number: ";
    cin >> x; // user will give 'x' a value.
    int y;
    cout << "Enter second number: ";
    cin >> y; // user will give 'y' a value.
    cout << (x != y) << " " << (x >= y) <<endl;
    return 0;
}