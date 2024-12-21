/*
Predict the output:
#include<iostream>
using namespace std;
int main() {
int x = 3 ;
float y = 3.0 ;
if (x == y)
cout <<"x and y are equal" ;
else
cout << "x and y are not equal" ;
return 0;
}

output will be:
 x and y are equal
*/

#include<iostream>
using namespace std;
int main() {
int x = 3 ;
float y = 3.0 ;
if (x == y) // c++ ne apne aap typecast kar liya chhote data type ko bade data type me.
cout <<"x and y are equal" ;
else
cout << "x and y are not equal" ;
return 0;
}