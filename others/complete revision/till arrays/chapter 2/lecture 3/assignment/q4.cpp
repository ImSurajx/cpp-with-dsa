/*
Display this AP - 4, 7, 10, 13,, 16... upto n terms.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int a = 4;
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        a += 3;
    }
    return 0;
}