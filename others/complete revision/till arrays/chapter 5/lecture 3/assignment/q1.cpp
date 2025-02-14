// Question 1: Count the number of triplets whose sum is equal to given value x.
#include <iostream>
using namespace std;

// taking input
void input(vector<int> &arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
}

// displaying
void display(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// checking number of triplets:
int triplets(vector<int> &arr, int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        int y;
        for (int j = i + 1; j < size; j++)
        {

            for (int k = j + 1; k < size; k++)
            {
                y = arr[i] + arr[j] + arr[k];
                if (y == x)
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    cout << "enter elements: ";
    vector<int> arr;
    input(arr, n);
    cout << "array is: ";
    display(arr);
    int x;
    cout << "enter x: ";
    cin >> x;
    cout <<"triplets is: "<<triplets(arr, n, x);
    return 0;
}