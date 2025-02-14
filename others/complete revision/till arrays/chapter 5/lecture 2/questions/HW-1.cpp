/*
Ques : Rotate the given array ‘a’ by k steps, where k is
non-negative.
Note : k can be greater than n as well where n is the
size of array ‘a’.
*/
#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &nums, int i, int j)
{
    while (i <= j)
    {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;
    }
}
void rotate(vector<int> &nums, int k)
{
    int n = nums.size();
    if (k > n)
    {
        k %= n;
    }
    reverse(nums, n - k, n - 1);
    reverse(nums, 0, n - k - 1);
    reverse(nums, 0, n - 1);
}
int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    vector<int> nums;
    cout << "enter elements of vector: ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    cout << "enter k: ";
    int k;
    cin >> k;
    cout << "current array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    rotate(nums, k);
    cout << "rotated array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}