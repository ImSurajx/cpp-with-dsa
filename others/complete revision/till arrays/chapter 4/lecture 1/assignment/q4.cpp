/*
Write a function to count the number of digits in a number and then print the square of this number.
*/
#include <iostream>
using namespace std;

int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return count * count;
}
int main()
{
    int n;
    cout << "enter a number: ";
    cin >> n;
    cout << "square of number of digit: " << count(n)<<endl;
    return 0;
}