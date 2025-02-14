// Example : Calculating Simple Interest
#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    cout << "enter principle, rate & time: ";
    cin >> p >> r >> t;
    cout << "simple interest is: " << (p * r * t) / 100 << endl;
    return 0;
}