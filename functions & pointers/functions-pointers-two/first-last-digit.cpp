#include <iostream>
using namespace std;
void find(int n, int *ptr1, int *ptr2)
{
    *ptr1 = n % 10;
    while (n > 9)
    {
        n /= 10;
    }
    *ptr2 = n;
    return;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    int firstDigit, lastDigit;
    int *ptr1 = &firstDigit;
    int *ptr2 = &lastDigit;
    find(n, ptr1, ptr2);
    cout << "first digit: " << firstDigit << endl
         << "last digit: " << lastDigit << endl;
    return 0;
}