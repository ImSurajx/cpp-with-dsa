/*
Ques : Display this AP - 1,3,5,7,9.. upto ‘n’
terms.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int a = 1;
    for (int i = 0; i < n; i++)
    {
        cout << a << endl;
        a += 2;
    }

    return 0;
}