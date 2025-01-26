// Ques : Merge two sorted arrays .
#include <iostream>
using namespace std;

// for taking input:
void input(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}

// for displaying arrays:
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

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
    // first array
    int x;
    cout << "enter size of array: ";
    cin >> x;
    cout << "enter elements of array: ";
    vector<int> arr1;
    input(arr1, x);
    cout << "elements are: ";
    display(arr1);

    // second array
    int n;
    cout << "enter size of array: ";
    cin >> n;
    cout << "enter elements of array: ";
    vector<int> arr2;
    input(arr2, n);
    cout << "elements are: ";
    display(arr2);
    sorting(arr1, arr2, x, n);
    cout<<"sorted array is: ";
    for (int i = 0; i < x+n; i++)
    {
        cout << arr1[i] << " ";
    }
    return 0;
}