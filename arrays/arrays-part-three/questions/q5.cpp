// Question 5: Merge Sorted Array
#include <iostream>
using namespace std;

void sorting(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    int i = m - 1;
    int j = n - 1;
    int k = (m + n) - 1;
    if (i == -1)
    {
        while (j >= 0)
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    else
    {

        while (i >= 0 && j >= 0)
        {
            if (arr1[i] < arr2[j])
            {
                arr1[k] = arr2[j];
                j--;
            }
            else
            {
                arr1[k] = arr1[i];
                i--;
            }
            k--;
        }
    }
    /*
    i = 5; j = 4; k = 5 + 4 = 9;
    arr1 = 1 2 3 4 5 0 0 0 0
    arr 2 = 6 7 8 9
    5>0 && 4>0 --> arr1[5]

    result:
    jo mere condition tha previous for i, j & k that is i = m, j = n, k = m + n;
    our new condtion is  i = m - 1, j = n -1, k = (m + n) - 1;
    */
    if (i >= -1)
    {
        while (j >= 0)
        {
            arr1[k] = arr2[j];
            j--;
            k--;
        }
    }
    if (j >= 0)
    {
        while (i >= 0)
        {
            arr1[k] = arr1[i];
            i--;
            k--;
        }
    }   
}

int main()
{
    int n, m;
    cout << "enter size of 1st array: ";
    cin >> m;
    cout << "enter size of 2nd array: ";
    cin >> n;

    // first array:
    vector<int> arr1(m + n);
    cout << "enter elements of 1st array: ";
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        arr1[i] = x;
    }
    cout<<"first array: ";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // second array:
    vector<int> arr2;
    cout << "enter elements of 2nd array: ";
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        arr2.push_back(y);
    }
    cout<<"second array: ";
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;
    sorting(arr1, arr2, m, n);
    cout<<"sorted array is: ";
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}
