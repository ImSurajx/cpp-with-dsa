// Ques : Combination and Permutation
#include <iostream>
using namespace std;
int fact(int n)
{
    int store = 1;
    while (n > 0)
    {
        store *= n;
        n--;
    }
    return store;
}
int main()
{
    int n, r;
    cout << "enter n: ";
    cin >> n;
    cout << "enter r: ";
    cin >> r;
    int combination = fact(n) / (fact(r) * fact((n - r)));
    int permutation = fact(n) / (fact((n - r)));
    cout << "combination is: " << combination << endl;
    cout << "permutatuin is: " << permutation << endl;
    return 0;
}