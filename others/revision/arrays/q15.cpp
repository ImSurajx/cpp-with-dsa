// Question 6: Find the next permutations of Array.
// Note: if not possible then print the sorted order in ascending order. leetcode-31
#include <iostream>
using namespace std;
/*
Algorithm:
step 1: find pivot idx.
step 2: idx + 1 to end - reverse.
step 3: find just greater number ka idx.
step 3: swap current idx value with next greater number ka index.
*/

// for taking input in the array.
void input(vector<int> &arr1, int size)
{
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        arr1.push_back(x);
    }
}

// for displaying the array:
void display(vector<int> &arr1)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
}

void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    // finding index
    int idx = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            idx = i;
            break;
        }
    }
    if (idx == -1)
    { // if array is already greatest.
        reverse(nums.begin(), nums.end());
    }
    else
    {
        // sorting after reverse after pivot
        reverse(nums.begin() + (idx + 1), nums.end());

        // finding the just greater element than idx
        int j = -1;
        for (int i = idx + 1; i < n; i++)
        {
            if (nums[i] > nums[idx])
            {
                j = i;
                break;
            }
        }
        // swapping idx & idx+1
        int temp = nums[idx];
        nums[idx] = nums[j];
        nums[j] = temp;
    }
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> arr1;
    cout << "enter elements of array: ";
    input(arr1, n);
    cout << "array: ";
    display(arr1);
    nextPermutation(arr1);
    cout << "next permutation of array: ";
    display(arr1);
    return 0;
}