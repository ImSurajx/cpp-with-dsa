/*
Ques : Merge two sorted arrays .
*/
#include <iostream>
using namespace std;
void input(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
vector<int> merge(vector<int> &arr1, vector<int> &arr2, int n, int m)
{
    vector<int> arr3(n + m);
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        arr3[k] = arr1[i];
        i++;
        k++;
    }
    while (j < m)
    {
        arr3[k] = arr2[j];
        j++;
        k++;
    }
    return arr3;
}

int main()
{
    int n, m;
    cout << "enter size of 1st & 2nd array: ";
    cin >> n >> m;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    cout << "enter element of 1st array: ";
    input(arr1, n);
    cout << "enter element of 2nd array: ";
    input(arr2, m);
    arr3 = merge(arr1, arr2, n, m);
    cout << "elements: ";
    display(arr3);
    return 0;
}