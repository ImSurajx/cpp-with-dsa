/*
write a function that take radius of a circle as an argument and return it's area.
*/

#include <iostream>

int area(int r)
{
    return 3.1415 * r * r;
}
using namespace std;
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "area of circle is: " << area(n) << endl;
    return 0;
}