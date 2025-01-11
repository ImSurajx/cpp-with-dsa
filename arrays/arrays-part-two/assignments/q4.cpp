// Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
#include <iostream>
using namespace std;
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    return;
}
void display(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return;
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of vector: ";
    input(v, n);
    cout << "current array: ";
    display(v, n);
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += v[i];
        }
        else
        {
            sum_odd += v[i];
        }
    }
    cout << "sum of even indices elements is: " << sum_even << endl;
    cout << "sum of odd indices elements is: " << sum_odd << endl;
    if (n == 0)
    {
        cout << "Array is empty. Difference is 0." << endl;
    }
    else
        cout << "diffrence will be: " << sum_even - sum_odd << endl;
    return 0;
}