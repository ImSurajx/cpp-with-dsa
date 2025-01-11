// write a program to copy the contents of one array into another in reverse order.
#include <iostream>
#include <vector>
using namespace std;
void input(vector<int> &a, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << endl;
}
void display(vector<int> &a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return;
}
void reverse(vector<int> &a, vector<int> &b, int size)
{
    for (int j = 0; j < size; j++)
    {
        int value = a.back(); // store last indexed value of vector
        a.pop_back();
        b.push_back(value);
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    // vector<int> v;
    // vector<int> z;
    // cout << "enter elements of array: ";
    // input(v, n);
    // cout << "current array: ";
    // display(v, n);
    // reverse(v, z, n);
    // cout << "reverse array: ";
    // display(z, n);
    vector<int> v1;
    input(v1, n);
    vector<int> v2(v1.size());
    display(v1, n);
    for (int i = 0; i < v2.size(); i++)
    {
        // i+j = size-i
        int j = v1.size() - 1 - i;
        v2[i] = v1[j];
    }
    display(v2, n);
    return 0;
}