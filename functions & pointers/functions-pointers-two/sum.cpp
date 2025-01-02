#include<iostream>
using namespace std;
int main(){
    int x = 10, y = 15;
    int *a = &x;
    int *b = &y;
    int sum = *a + *b;
    cout<<sum<<endl;
    return 0;
}