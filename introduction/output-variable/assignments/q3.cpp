/*
How much space does the following data types take
1. int
2. bool
3. float
*/
#include<iostream>
using namespace std;
int main(){
    int a = 5;
    float b = 5;
    bool flag = true;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
    cout<<sizeof(flag)<<endl;
    return 0;
}