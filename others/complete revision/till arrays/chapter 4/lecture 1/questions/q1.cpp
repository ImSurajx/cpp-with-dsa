/*
Ques : Combination and Permutation
*/
#include <iostream>
using namespace std;

int fact(int num)
{
    int product = 1;
    while (num > 0)
    {
        product *= num;
        num--;
    }
    return product;
}

int main()
{
    int n;
    cout << "enter n: ";
    cin >> n;
    int r;
    cout << "enter r: ";
    cin >> r;
    cout << "combination: " << fact(n) / (fact(r) * fact(n - r)) << endl;
    cout << "permutation: " << fact(n) / fact(n - r) << endl;
    return 0;
}
