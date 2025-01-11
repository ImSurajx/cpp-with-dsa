// If an array arr contains n elements, then check if the given array is a palindrome or not .
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
    cout << "enter elements of array: ";
    if (n <= 0)
    {
        cout << "Array size must be positive." << endl;
        return 0;
    }
    vector<int> v;
    input(v, n);
    cout << "elements of array: ";
    display(v, n);
    bool flag = true;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (v[i] != v[j])
        {
            flag = false;
        }
    }
    if (flag)
    {
        cout << "the following array is a palindrome" << endl;
    }
    else
    {
        cout << "the following array is not a palindrome" << endl;
    }
    return 0;
}