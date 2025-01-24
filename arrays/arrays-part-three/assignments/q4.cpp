// Check if an array is subset of another.
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout << "enter size of main array: ";
    cin >> m;
    cout << "enter size of subset array: ";
    cin >> n;
    int arr1[m];
    int arr2[n];
    cout << "enter elements of main array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr1[i];
    }
    cout << "enter elements of subset array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    bool flag;
    for (int i = 0; i < n; i++)
    {
        flag = false;
        for (int j = 0; j < m; j++)
        {
            if (arr1[j] == arr2[i])
            {
                flag = true;
                break;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    if (flag == true)
    {
        cout << "the following array is subset of main array. ";
    }
    else
    {
        cout << "the following array is not the subset of main array. ";
    }

    return 0;
}