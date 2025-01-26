// Ques : Move all negative numbers to beginning and
// positive to end with constant extra space.
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

// method 2: two pointer method.
void sorting2(vector<int> &arr)
{
    int i = 0;
    int j = arr.size() - 1;
    while (i < j)
    {
        if (arr[i] < 0)
        {
            i++;
        }
        else if (arr[j] > 0)
        {
            j--;
        }
        else if (arr[i] > 0 && arr[j] < 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
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