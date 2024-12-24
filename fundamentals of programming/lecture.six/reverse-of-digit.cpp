// wap to print reverse of a given number.
// sum of digit
#include <iostream>
using namespace std;
int main()
{
    int n, digit, store = 0;
    cout << "enter a number: ";
    cin >> n;
    while (n > 0)
    {
        digit = n % 10;
        store *= 10; // store position matter.
        store += digit; // store position matter.
        n /= 10;
    }
    cout << "reverse of digit is: " << store << endl;

    return 0;
}