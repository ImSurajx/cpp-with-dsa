// Ques : Sort the array of 0’s , 1’s and 2’s .
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

// method 1: three pass method.
void sorting1(vector<int> &arr)
{
    int noz = 0;
    int noo = 0;
    int noot = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            noz++;
        }
        else if (arr[i] == 1)
        {
            noo++;
        }
        else
        {
            noot++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (i < noz)
        {
            arr[i] = 0;
        }
        else if (i < noz + noo)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 2;
        }
    }
}

// method 2: dutch flag algorithm.
void sorting2(vector<int> &arr)
{
    int low = 0;
    int mid = 0;
    int high = arr.size() - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        }
        else if (arr[mid] == 2)
        {
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;
            high--;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
    }
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    cout << "enter elements of array: ";
    vector<int> arr;
    input(arr, n);
    cout << "elements are: ";
    display(arr);
    sorting2(arr);
    cout << "current elements: ";
    display(arr);
    return 0;
}