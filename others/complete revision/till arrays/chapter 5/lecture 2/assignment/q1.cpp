/*
Count the number of elements stricty greator than x.
*/
#include <iostream>
using namespace std;
void sort(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of array: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int x;
    cout << "enter x: ";
    cin >> x;
    int count = 0;
    sort(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }
    cout << "total number of elements greator than x is: " << count << endl;
    return 0;
}