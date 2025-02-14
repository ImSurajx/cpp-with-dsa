// how much space does following data type take.
// int bool & float also char
#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    float b = 10;
    bool flag = true;
    char ch = 'a';
    cout << "size of int data type: " << sizeof(a) << endl;
    cout << "size of float data type: " << sizeof(b) << endl;
    cout << "size of bool data type: " << sizeof(flag) << endl;
    cout << "size of char data type: " << sizeof(ch) << endl;
    return 0;
}