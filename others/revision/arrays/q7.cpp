// Ques : Find the last occurrence of x in the array.
#include <iostream>
#include <vector>
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
    int x;
    cout << "enter x: ";
    cin >> x;
    int idx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            idx = i;
        }
    }
    cout << "the last occurrence of " << x << " is: " << idx << endl;
    return 0;
}