#include <iostream>
using namespace std;
int main()
{
    // syntax & declaration.
    // array always start with zero '0';
    int x[10];
    // input using for-loop
    for (int i = 0; i < 10; i++)
    {
        cout<<"enter value of array "<<i<<": ";
        cin>>x[i];
    }
    // output using for-loop
    for (int i = 0; i < 10; i++)
    {
        cout<<x[i]<<" ";
    }
    return 0;
}
