// Ques: Predict the output.
#include <iostream>
using namespace std;
int main()
{
    int i = 2, j = 3, k, l;
    float a, b;
    k = i / j * j; // k = 2/3*3 -> 2/9 -> 2/3*3 = 2/3 -> 0 so 0*3 = 0;
    l = j / i * i; // l = 3/2*2 -> 3/2 = 1 so 1*2 = 2;
    a = i / j * j; // a = 2/3*3 -> 2/9 -> 2/3*3 = 2/3 -> 0 so 0*3 = 0;
    b = j / i * i; // b = 3/2*2 -> 3/2 = 1 so 1*2 = 2;
    cout << k << " " << l << " " << a << " " << b << endl;
    return 0;
}