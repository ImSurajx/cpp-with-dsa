// wap to find the largest three elements in the array.
#include <iostream>
using namespace std;

// for taking input.
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

// for displaying the array.
void display(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    cout << "enter elements of array: ";
    vector<int> v;
    input(v, n);
    cout << "array is: ";
    display(v, n);
    int x = -1, y = -1, z = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > x)
            x = v[i];
    }
    // cout<<x;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > y && x != v[i])
            y = v[i];
    }
    // cout<<y;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > z && x != v[i] && y != v[i])
            z = v[i];
    }
    // cout<<z;
    cout << "three largest element in following array is: " << x << ", " << y << ", " << z << endl;
    return 0;
}