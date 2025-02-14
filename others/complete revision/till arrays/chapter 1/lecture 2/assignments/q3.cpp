// Find the output for this code. Let input:- 2 3
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    x += y;
    x -= y;
    x %= y;
    cout << x;
}
/*
Solution:
when x = 2, & y = 3;
x += y; 2 + 3 = 5;
x -= y; 5 - 3 = 2;
x %= y; 2 % 3 = 2;
so x = 2;
*/