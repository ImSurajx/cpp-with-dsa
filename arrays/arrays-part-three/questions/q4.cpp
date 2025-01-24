// Question 4: Merge two sorted arrays.
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

// for displaying the array:
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
    // initilizing size of vectors:
    int size1 = arr1.size();
    int size2 = arr2.size();
    int i = 0; // for arr1
    int j = 0; // for arr2
    int k = 0; // for arr3
    vector<int> arr3;
    while (i < size1 && j < size2)
    {
        if (arr1[i] < arr2[j])
        {
            int x = arr1[i];
            arr3.push_back(x);
            i++;
        }
        else
        {
            int y = arr2[j];
            arr3.push_back(y);
            j++;
        }
        k++;
    }

    // for remaining
    if (i == size1)
    { // arr1 ke saare elements utha chuka hu.
        while (j < size2)
        {
            int z = arr2[j];
            arr3.push_back(z);
            j++;
            k++;
        }
    }

    if (j == size2)
    { // arr1 ke saare elements utha chuka hu.
        while (i < size1)
        {
            int a = arr1[i];
            arr3.push_back(a);
            i++;
            k++;
        }
    }

    return arr3;
}

int main()
{
    // First Array:
    int num1;
    cout << "enter size of 1st array: ";
    cin >> num1;
    vector<int> arr1;
    cout << "enter elements of 1st array: ";
    input(arr1, num1);
    cout << "first array: ";
    display(arr1);

    // Second Array:
    int num2;
    cout << "enter size of 2nd array: ";
    cin >> num2;
    vector<int> arr2;
    cout << "enter elements of 2nd array: ";
    input(arr2, num2);
    cout << "second array: ";
    display(arr2);

    // merged array
    vector<int> arr3 = merge(arr1, arr2);
    cout << "sorted array: ";
    display(arr3);
    return 0;
}