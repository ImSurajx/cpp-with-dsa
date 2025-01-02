#include <iostream>
using namespace std;
int main()
{
    bool x = true;
    bool* p = &x;
    cout << &x << endl;
    cout << p << endl;
    return 0;
}