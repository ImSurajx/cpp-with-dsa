/*
Ques : Find the last occurrence of x in the array.
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int x;
    cout << "enter x: ";
    cin >> x;
    int idx = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == x)
        {
            idx = i;
            break;
        }
    }
    cout << "last occurence of x is: " << idx << endl;
    return 0;
}