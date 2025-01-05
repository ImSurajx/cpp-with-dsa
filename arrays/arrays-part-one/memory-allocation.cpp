// continuoes memory allocation
/*
ek ke baad ek memory allocate hoti hain.
*/
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;
    cout << &arr[4] << endl;
    cout<< &arr << endl; // cout<<&arr<<endl; == cout<<arr<<endl; --> giving address of first array element only in c++;
    /*
    0x16ced7274
    0x16ced7278
    0x16ced727c
    0x16ced7280
    0x16ced7284
    0x16bd93274
    */
}