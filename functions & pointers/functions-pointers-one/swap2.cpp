#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "enter a: ";
    cin >> a;
    cout << "enter a: ";
    cin >> b;
    c = b;
    b = a;
    a = c;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    return 0;
}