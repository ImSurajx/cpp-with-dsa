// Question 3: Sort the array of 0's, 1's & 2's. leetcode: 75.
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
    int notw = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            noz++;
        }
        else if (v[i] == 1)
        {
            noo++;
        }
        else
            notw++;
    }
    // overwriting elements
    for (int i = 0; i < n; i++)
    {
        if (i < noz)
        {
            v[i] = 0;
        }
        else if (i < noz + noo)
        {
            v[i] = 1;
        }
        else
            v[i] = 2;
    }
}

// Three Pointer Method // dutch flag algorithm
void sortingm2(vector<int> &v)
{
    int n = v.size();
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        // case 1 : when mid = 0;
        if (v[mid] == 0)
        {
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            low++;
            mid++;
        }
        // case 2: when mid = 2;
        else if (v[mid] == 2)
        {
            int temp = v[mid];
            v[mid] = v[high];
            v[high] = temp;
            high--;
        }
        // case 3: when mid 1;
        else
        {
            mid++;
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