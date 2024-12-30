// write a function to count the number of digit in a number and then print the square of this number.
#include <iostream>
using namespace std;
int digit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count;
}
int square(int x)
{
    return x * x;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "number of digit: " << digit(n) << endl;
    cout << "square of digit is: " << square(digit(n)) << endl;
    return 0;
}