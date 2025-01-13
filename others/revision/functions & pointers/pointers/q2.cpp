// Write a function to find out the first and last digit of a number
// without returning anything.
#include <iostream>
using namespace std;
void find(int n, int *p, int *q)
{
    *q = n % 10;
    while (n > 9)
    {
        n /= 10;
    }
    *p = n;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int firstdigit, lastdigit;
    int *p = &firstdigit, *q = &lastdigit;
    find(n, p, q);
    cout << "first digit is: " << firstdigit << endl;
    cout << "last digit is: " << lastdigit << endl;
}