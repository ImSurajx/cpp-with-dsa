// find the doublet in the array whose sum is equal to the given value x.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of vector: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int sum;
    cout << "enter the element which doublet sum you want to find: ";
    cin >> sum;
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = i + 1; j < v.size(); j++) // why we don't use j = 0, because it will repeat the same value again.
        {
            if (v[i] + v[j] == sum)
            {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}