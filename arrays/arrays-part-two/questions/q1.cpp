// find the last occurrence of x in the array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of vector: ";
    cin >> n;
    vector<int> v;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int search;
    cout << "enter the element that you want search: ";
    cin >> search;
    int idx = -1;
    // forward loop
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == search)
    //     {
    //         idx = i;
    //     }
    // }
    // revserse loop - for using less time.
    for (int i = v.size()-1; i >=0 ; i--)
    {
        if (v[i] == search)
        {
            idx = i;
            break;
        }
    }
    cout << "last occurrence of search varible on index: " << idx << endl;
    return 0;
}