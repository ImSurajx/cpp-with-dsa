// check if the given array is shorted or not.
#include <iostream>
#include <vector>
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
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] > v[i + 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "array is sorted." << endl;
    }
    else
    {
        cout << "array is not sorted." << endl;
    }
    return 0;
}