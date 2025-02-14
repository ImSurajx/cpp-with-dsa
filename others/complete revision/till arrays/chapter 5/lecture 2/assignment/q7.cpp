/*
If an array contains n elements, then check it the given array is a palindrome or not .
*/
#include <iostream>
using namespace std;
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
    int unique = -1;
    bool flag = true;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "plaindrome." << endl;
    }
    else
    {
        cout << "not a plaindrome." << endl;
    }
    return 0;
}