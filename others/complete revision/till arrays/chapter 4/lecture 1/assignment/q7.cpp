/*
Can the same function name be used for different functions without any conflict?
yes it's possible but sometimes we can't we have to use different data types.
*/
#include <iostream>
using namespace std;

float count(float n)
{
    int count = 1;
    while (n < 0)
    {
        n /= 10;
        count--;
    }
}

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
    float n;
    cout << "enter a number: ";
    cin >> n;
    cout << "square of number of digit: " << count(n) << endl;
    return 0;
}