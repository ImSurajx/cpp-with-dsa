/*
Predict the output
#include <bits/stdc++.h>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}
*/
#include <iostream>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
    // output
x-- ; // x = 9, 8, 7, 6, 5, 4
y++ ; // y = 1, 2, 3, 4, 5, 6
cout << x << " " << y << endl ;
}
}