/*
Ques : Write a function to compute the greatest
common divisor of two given numbers
*/
#include <iostream>
using namespace std;

int hcf(int x, int y)
{
    int hcf;
    for (int i = 1; i <= min(x, y); i++)
    {
        if (x % i == 0 && y % i == 0)
        {
            hcf = i;
        }
    }
    return hcf;
}

int main()
{
    int x, y;
    cout << "enter value of x & y: ";
    cin >> x >> y;
    cout << "HCF will be: " << hcf(x, y) << endl;
    return 0;
}