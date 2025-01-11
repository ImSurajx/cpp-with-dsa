// count the number of elements strictly greater than x;
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
    vector<int> v;
    cout << "enter elements of array: ";
    input(v, n);
    sort(v.begin(), v.end());
    cout << "elements of array: ";
    display(v, n);
    int x;
    cout << "enter element: ";
    cin >> x;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > x)
            count++;
    }
    cout << "number of elements strictly greater than " << x << " is: " << count << endl;
    return 0;
}