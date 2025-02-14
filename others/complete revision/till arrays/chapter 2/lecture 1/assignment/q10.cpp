/*
Predict the output of the below code:
#include<iostream>
using namespace std;
int main() {
int a = 500, b, c;
if (a >= 400)
b = 300;
c = 200;
return 0;
cout << "value of b and c are respectively " << b << " and " << c;
}
*/
#include <iostream>
using namespace std;
int main()
{
    int a = 500, b, c;
    if (a >= 400)
        b = 300;
    c = 200;
    return 0; // because of this return statement function ends here.
    cout << "value of b and c are respectively " << b << " and " << c;
}