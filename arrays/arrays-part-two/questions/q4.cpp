// write a program to reverse the array without using any extra array;
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
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of array: ";
    input(v, n);
    // reverse
    //  int i = 0;
    //  int j = v.size()-1;
    //  while(i<=j)
    //  {
    //     // swap v[i] and v[j];
    //     int temp = v[i];
    //     v[i] = v[j];
    //     v[j] = temp;
    //     i++;
    //     j--;
    //  }
    for (int i = 0, j = v.size() - 1; i <= j; i++, j--)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }

    cout << "current array: ";
    display(v, n);
    return 0;
}