/*
Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
*/
#include <iostream>
using namespace std;
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
    int esum = 0, osum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            esum += arr[i];
        }
        else
        {
            osum += arr[i];
        }
    }
    cout << "difference b/w esum & osum: " << esum - osum << endl;

    return 0;
}