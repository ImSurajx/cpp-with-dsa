#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter a: ";
    cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}