// Given an array of integers, change the value of all odd indexed elements to its second multiple and increment all even indexed values by 10.
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
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            v[i] += 10;
        }
        else
        {
            v[i] *= 2;
        }
    }
    display(v, n);
    return 0;
}