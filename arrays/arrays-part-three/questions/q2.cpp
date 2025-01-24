// Question 2: move all negative numbers to beginning and positive to end with constant extra space.
#include <iostream>
#include<vector>
using namespace std;
/*
Algorithm:
If number is smaller than 0 move it at the start else move it at the end.
do pointer lenge
ek ko array se suru me point karenge or ek ko last me.
int start = 0;
int end = n - 1;
*/

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

// sorting the number in accending order

void sorting(vector<int> &v)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] < 0 || v[i] == 0)
            i++;
        if (v[j] > 0 || v[j] == 0)
            j--;
        else if (v[i] > 0 && v[j] < 0)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
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
    sorting(v);
    cout << "current array: ";
    display(v);
    return 0;
}