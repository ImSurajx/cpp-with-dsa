// Question 1: Sort the array of 0's and 1's.
#include <iostream>
#include<vector>
using namespace std;

// for taking inputs in arrays
void input(vector<int> &v, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

// for displaying the arrays
void display(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Two Pass Method

// for sorting arrays in 0's & 1's
void sortingm1(vector<int> &v)
{
    // counting zero's & one's
    int n = v.size();
    int noz = 0;
    int noo = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else
            noo++;
    }
    // overwriting elements
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else
            v[i] = 1;
    }
}

// Two Pointer Method
void sortingm2(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] == 0)
            i++;
        else if (v[j] == 1)
            j--;
        else if (v[i] == 1 && v[j] == 0)
        {
            v[i] = 0;
            v[j] = 1;
            i++;
            j--;
        }
    }
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements: ";
    input(v, n);
    sortingm2(v);
    cout << "current array: ";
    display(v);
    return 0;
}