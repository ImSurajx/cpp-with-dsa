#include<iostream>
using namespace std;
int main(){
    int *ptr1 = NULL; // reserved address 0x0
    int *ptr2 = 0;
    int *ptr3 = '\0';   
    cout<<ptr1<<" "<<ptr2<<" "<<ptr3<<endl; // 0x0
    // \0 -> null character - 0
    // char ch = '\0';
    // count<<int(ch);
}