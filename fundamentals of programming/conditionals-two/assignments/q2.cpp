/*
Predict the output:
#include<iostream>
using namespace std;
int main( ) {
int a = 5, b, c ;
b = a = 15 ; // 
c = a < 15 ; // 
cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}

output will be:
a = 15, b = 15, c = 0.

*/

#include<iostream>
using namespace std;
int main( ) {
int a = 5, b, c ; // a=5, bx, cx
b = a = 15 ; // r - > l, a = 15, b = 15
c = a < 15 ; // a<15 x so c = 0;
cout << "a = " << a << ", b = " << b << " , c = "<< c ;
return 0;
}