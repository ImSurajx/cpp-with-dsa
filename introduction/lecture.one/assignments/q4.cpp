/*
what is the output of this program?
int main(){
    int a = 4;
    int b = 5;
    a++, b--;
    cout<< ++a << " " << b--;
}
    a = 6, b = 4;
*/

#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 5;
    a++, b--;
    cout<< ++a << " " << b-- <<endl;
    return 0;
}